
#include "preseeddevice.h"
#include "supporteddevice.h"
#include "utils.h"
#include <QInputDialog>
#include <QString>

PreseedDevice::PreseedDevice(QWidget *parent, SupportedDevice dev) :
    QWidget(parent),
    ui(new Ui::PreseedDevice)
{
    ui->setupUi(this);
}

PreseedDevice::~PreseedDevice()
{
    delete ui;
}

void PreseedDevice::on_installoptionsnextButton_clicked()
{
    ui->installoptionsnextButton->setEnabled(false);

    if (ui->sdinstallradioButton->isChecked())
    {
        utils::writeLog("SD installation selected");
        emit preseedSelected(utils::INSTALL_SD);
    }
}
