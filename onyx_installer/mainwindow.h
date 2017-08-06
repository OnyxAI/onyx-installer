
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "supporteddevice.h"
#include <QString>
#include <QUrl>
#include <QNetworkReply>
#include <QNetworkAccessManager>
#include "diskdevice.h"
#include <QMovie>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QList<QWidget *> widgetList;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    int getInstallType() { return installType; }

public slots:
    void setLanguage(QString, SupportedDevice);
    void setVersion(bool, QUrl);
    void setPreseed(int installType);
    void selectDevice(DiskDevice *nd);
    void acceptLicense();
    void completeDownload(QString fileName);
    void showUpdate();
    void dismissUpdate();
    void replyFinished(QNetworkReply* reply);
    void rotateWidget(QWidget *oldWidget, QWidget *newWidget, bool enableBackbutton = true);
    void goBack();
    void showSuccessDialog();

private:
    Ui::MainWindow *ui;
    void translate(QString locale);
    QString language;
    QString mirrorURL;
    SupportedDevice device;
    QString installDevicePath;
    int installDeviceID;
    bool isOnline;
    QUrl image;
    int installType;
    QNetworkAccessManager *accessManager;
    DiskDevice *nd;
    QString localeName;
    QMovie *spinner;
};

#endif // MAINWINDOW_H
