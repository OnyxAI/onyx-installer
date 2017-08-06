
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "langselection.h"
#include "updatenotification.h"
#include "versionselection.h"
#include "preseeddevice.h"
#include "deviceselection.h"
#include "utils.h"
#include <QString>
#include <QTranslator>
#include "supporteddevice.h"
#include <QList>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include "io.h"
#include "diskdevice.h"
#include "licenseagreement.h"
#include "downloadprogress.h"
#include "extractprogress.h"
#include "successdialog.h"
#include "preseeder.h"
#include <QMovie>
#if defined (Q_OS_MAC) || defined (Q_OS_LINUX)
    #include <sys/mount.h>
    #include <QDir>
#endif
#ifdef Q_OS_LINUX
#include <unistd.h>
#endif

#define WIDGET_START QPoint(10,110)

UpdateNotification *updater;
LangSelection *ls;
VersionSelection *vs;
PreseedDevice *ps;
DeviceSelection *ds;
LicenseAgreement *la;
DownloadProgress *dp;
ExtractProgress *ep;
SuccessDialog *sd;

QTranslator translator;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    this->setFixedSize(this->size());
    ui->setupUi(this);
    ui->backButton->hide();
    connect(ui->backButton, SIGNAL(clicked()), this, SLOT(goBack()));

    /* Attempt auto translation */
    QString autolocale = QLocale::system().name();
    utils::writeLog("Detected locale as " + autolocale);
    translate(autolocale);
    /* Resolve a mirror URL */
    spinner = new QMovie(":/assets/resources/spinner.gif");
    ui->spinnerLabel->setMovie(spinner);
    spinner->start();
    this->mirrorURL = "http://download.onyxlabs.fr/sync";
    utils::writeLog("Resolving a mirror");
    accessManager = new QNetworkAccessManager(this);
    connect(accessManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(replyFinished(QNetworkReply*)));
    QNetworkRequest request(this->mirrorURL);
    accessManager->get(request);
    updater = new UpdateNotification(this);
    updater->hide();
    connect(updater, SIGNAL(hasUpdate()), this, SLOT(showUpdate()));
}

void MainWindow::rotateWidget(QWidget *oldWidget, QWidget *newWidget, bool enableBackbutton)
{
    this->ui->backButton->setEnabled(enableBackbutton);

    // make sure we update the state of the BackButton
    qApp->processEvents();

    if (this->widgetList.size() == 0)
    {
        this->widgetList.append(oldWidget);
    }

    this->widgetList.append(newWidget);

    oldWidget->hide();
    newWidget->move(WIDGET_START);
    newWidget->show();
}

void MainWindow::replyFinished(QNetworkReply *reply)
{
    this->mirrorURL = "http://download.onyxlabs.fr/";
    utils::writeLog("Resolved mirror to " + this->mirrorURL);
    reply->deleteLater();
    ui->spinnerLabel->hide();
    /* Enumerating devices */
    QList<SupportedDevice *> devices = utils::buildDeviceList();
    ls = new LangSelection(this, devices);
    connect(ls, SIGNAL(languageSelected(QString, SupportedDevice)), this, SLOT(setLanguage(QString, SupportedDevice)));
    ls->move(WIDGET_START);
    ls->show();
    /* Check if an update exists */
    updater->isUpdateAvailable(mirrorURL);
}

void MainWindow::dismissUpdate() { rotateWidget(updater, ls); }

void MainWindow::showUpdate()
{
    connect(updater, SIGNAL(ignoreUpdate()), this, SLOT(dismissUpdate()));
    rotateWidget(ls, updater);
}

void MainWindow::setLanguage(QString language, SupportedDevice device)
{
        this->language = language;
        this->device = device;
        utils::writeLog("The user has selected " + this->language + " as their language");
        utils::writeLog("The user has selected " + this->device.getDeviceName() + " as their device");
        if (language != tr("English"))
        {
            translate(language);
        }
        else
        {
            /* Remove because we may have already done the deed */
            qApp->removeTranslator(&translator);
        }
        vs = new VersionSelection(this, this->device.getDeviceShortName(), this->mirrorURL);
        connect(vs, SIGNAL(versionSelected(bool, QUrl)), this, SLOT(setVersion(bool, QUrl)));
        ui->backButton->show();
        rotateWidget(ls, vs);
}

void MainWindow::goBack()
{

    this->widgetList.last()->deleteLater();
    this->widgetList.pop_back();
    this->widgetList.last()->move(WIDGET_START);
    this->widgetList.last()->show();

    if (this->widgetList.size() == 1)
    {
        ui->backButton->hide();
    }
}

void MainWindow::setVersion(bool isOnline, QUrl image)
{
    if (isOnline)
    {
        QString localImage = image.toString();
        localImage.replace("http://download.onyxlabs.fr/", this->mirrorURL);
        localImage.remove("\n"); /* Handle line issues */
        localImage.remove("%0A"); /* other platforms might see this */
        image = QUrl(localImage);
        utils::writeLog("The user has selected an online image for " + this->device.getDeviceName() + " with build URL : " + image.toString());
        this->isOnline = true;
    }
    else
    {
        utils::writeLog("The user has selected a local image for " + this->device.getDeviceName() + " with file location: " + image.toString());
        this->isOnline = false;
    }
    this->image = image;
    /* We call the preseeder: even if we can't preseed, we use its callback to handle the rest of the application */
    ps = new PreseedDevice(this, this->device);
    connect(ps, SIGNAL(preseedSelected(int)), this, SLOT(setPreseed(int)));
    connect(ps, SIGNAL(preseedSelected(int, QString)), this, SLOT(setPreseed(int,QString)));
    rotateWidget(vs, ps);
}

void MainWindow::setPreseed(int installType)
{
    this->installType = installType;
    ds = new DeviceSelection(this);
    connect(ds, SIGNAL(DeviceSelected(DiskDevice*)), this, SLOT(selectDevice(DiskDevice*)));
    rotateWidget(ps, ds);
}


void MainWindow::selectDevice(DiskDevice *nd)
{
    this->nd = nd;
    la = new LicenseAgreement(this);
    connect(la, SIGNAL(licenseAccepted()), this, SLOT(acceptLicense()));
    rotateWidget(ds, la);
    this->installDevicePath = nd->getDiskPath();
    this->installDeviceID = nd->getDiskID();
}

void MainWindow::acceptLicense()
{
    /* Move to Download widget, even if we aren't downloading */
    QUrl url;
    dp = new DownloadProgress(this);
    url = this->image;
    connect(dp, SIGNAL(downloadCompleted(QString)), this, SLOT(completeDownload(QString)));
    rotateWidget(la, dp, false);
    dp->download(url, this->isOnline);
}

void MainWindow::completeDownload(QString fileName)
{
    /* If we downloaded an image, replace former URL with an actual image file */
    if (fileName != NULL)
        this->image = QUrl(fileName);
#if defined (Q_OS_WIN) || defined (Q_OS_WIN32)
        /* Windows: we actually want the device ID */
        ep = new ExtractProgress(this, QString::number(this->installDeviceID), this->image.toString());
#endif
#if defined (Q_OS_MAC) || defined (Q_OS_LINUX)
        ep = new ExtractProgress(this, this->installDevicePath, this->image.toString());
#endif
    connect(ep, SIGNAL(finishedExtraction()), this, SLOT(showSuccessDialog()));
    rotateWidget(dp, ep, false);
    ep->extract();
}

void MainWindow::translate(QString locale)
{
    utils::writeLog("Attempting to load translation for locale " + locale);
    if (translator.load(qApp->applicationDirPath() + "/onyx_" + locale + ".qm"))
    {
        utils::writeLog("Translation loaded successfully");
        qApp->installTranslator(&translator);
        ui->retranslateUi(this);
        this->localeName = locale;
    }
    else
        utils::writeLog("Could not load translation!");
}

void MainWindow::showSuccessDialog()
{
    sd = new SuccessDialog(this);
    rotateWidget(ep, sd, false);
}

MainWindow::~MainWindow()
{
    delete ui;
}
