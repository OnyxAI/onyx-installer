
#include "licenseagreement.h"
#include "utils.h"

LicenseAgreement::LicenseAgreement(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LicenseAgreement)
{
    ui->setupUi(this);
}

LicenseAgreement::~LicenseAgreement()
{
    delete ui;
}

void LicenseAgreement::on_licenseAcceptNextButton_clicked()
{
    ui->licenseAcceptNextButton->setEnabled(false);
    if (!ui->gplacceptcheckBox->isChecked())
    {
        utils::displayError(tr("License agreement"), tr("<html><body>You need to accept the license agreement to proceed</body></html>"));
        ui->licenseAcceptNextButton->setEnabled(true);
    }
    else
    {
        utils::writeLog("EULA has been accepted");
        emit licenseAccepted();
    }
}
