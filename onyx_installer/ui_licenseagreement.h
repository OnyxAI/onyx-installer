/********************************************************************************
** Form generated from reading UI file 'licenseagreement.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LICENSEAGREEMENT_H
#define UI_LICENSEAGREEMENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LicenseAgreement
{
public:
    QLabel *licensedescriptionLabel;
    QLabel *licenseLabel;
    QPushButton *licenseAcceptNextButton;
    QCheckBox *gplacceptcheckBox;
    QLabel *licensedescriptionLabel_2;

    void setupUi(QWidget *LicenseAgreement)
    {
        if (LicenseAgreement->objectName().isEmpty())
            LicenseAgreement->setObjectName(QString::fromUtf8("LicenseAgreement"));
        LicenseAgreement->resize(640, 240);
        LicenseAgreement->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);"));
        licensedescriptionLabel = new QLabel(LicenseAgreement);
        licensedescriptionLabel->setObjectName(QString::fromUtf8("licensedescriptionLabel"));
        licensedescriptionLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(12);
        licensedescriptionLabel->setFont(font);
        licensedescriptionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        licensedescriptionLabel->setAlignment(Qt::AlignCenter);
        licenseLabel = new QLabel(LicenseAgreement);
        licenseLabel->setObjectName(QString::fromUtf8("licenseLabel"));
        licenseLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(24);
        licenseLabel->setFont(font1);
        licenseLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        licenseLabel->setAlignment(Qt::AlignCenter);
        licenseAcceptNextButton = new QPushButton(LicenseAgreement);
        licenseAcceptNextButton->setObjectName(QString::fromUtf8("licenseAcceptNextButton"));
        licenseAcceptNextButton->setGeometry(QRect(510, 190, 65, 41));
        licenseAcceptNextButton->setFont(font1);
        licenseAcceptNextButton->setCursor(QCursor(Qt::OpenHandCursor));
        licenseAcceptNextButton->setFocusPolicy(Qt::WheelFocus);
        licenseAcceptNextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:#17394A;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(240,240,240), stop: 1 rgb(210,210,210));\n"
"border-radius: 11px;\n"
"}\n"
"QPushButton:focus {\n"
"border: 1px solid #17394A;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"background: qradialgradient(cx: 0.4, cy: -0.1,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(240,240,240), stop: 1 rgb(88,188,155));\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"background: qradialgradient(cx: 0.1, cy: -0.1,\n"
"fx: 0.4, fy: -0.1,\n"
"radius: 1.35, stop: 0 rgb(240,240,240), stop: 1 rgb(180,180,180));\n"
"}\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/resources/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        licenseAcceptNextButton->setIcon(icon);
        licenseAcceptNextButton->setIconSize(QSize(32, 32));
        licenseAcceptNextButton->setAutoDefault(true);
        licenseAcceptNextButton->setDefault(true);
        gplacceptcheckBox = new QCheckBox(LicenseAgreement);
        gplacceptcheckBox->setObjectName(QString::fromUtf8("gplacceptcheckBox"));
        gplacceptcheckBox->setGeometry(QRect(180, 126, 20, 31));
        gplacceptcheckBox->setFont(font);
        gplacceptcheckBox->setFocusPolicy(Qt::WheelFocus);
        gplacceptcheckBox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        licensedescriptionLabel_2 = new QLabel(LicenseAgreement);
        licensedescriptionLabel_2->setObjectName(QString::fromUtf8("licensedescriptionLabel_2"));
        licensedescriptionLabel_2->setGeometry(QRect(210, 130, 321, 21));
        licensedescriptionLabel_2->setFont(font);
        licensedescriptionLabel_2->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        licensedescriptionLabel_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        QWidget::setTabOrder(gplacceptcheckBox, licenseAcceptNextButton);

        retranslateUi(LicenseAgreement);

        QMetaObject::connectSlotsByName(LicenseAgreement);
    } // setupUi

    void retranslateUi(QWidget *LicenseAgreement)
    {
        LicenseAgreement->setWindowTitle(QApplication::translate("LicenseAgreement", "Form", 0, QApplication::UnicodeUTF8));
        licensedescriptionLabel->setText(QApplication::translate("LicenseAgreement", "<html><body>just before you have a play</body></html>", 0, QApplication::UnicodeUTF8));
        licenseLabel->setText(QApplication::translate("LicenseAgreement", "<html><body>License agreement</body></html>", 0, QApplication::UnicodeUTF8));
        licenseAcceptNextButton->setText(QString());
        gplacceptcheckBox->setText(QString());
        licensedescriptionLabel_2->setText(QApplication::translate("LicenseAgreement", "<html><head/><body><p>I accept the <a href=\"https://osmc.tv/about/corporate/eula\"><span style=\" text-decoration: underline; color:blackB;\">End User License Agreement</span></a></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LicenseAgreement: public Ui_LicenseAgreement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LICENSEAGREEMENT_H
