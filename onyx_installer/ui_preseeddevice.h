/********************************************************************************
** Form generated from reading UI file 'preseeddevice.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRESEEDDEVICE_H
#define UI_PRESEEDDEVICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreseedDevice
{
public:
    QPushButton *installoptionsnextButton;
    QLabel *installoptionsdescriptionLabel;
    QLabel *installoptionsLabel;
    QGroupBox *radiobuttongroupBox;
    QRadioButton *sdinstallradioButton;

    void setupUi(QWidget *PreseedDevice)
    {
        if (PreseedDevice->objectName().isEmpty())
            PreseedDevice->setObjectName(QString::fromUtf8("PreseedDevice"));
        PreseedDevice->resize(640, 240);
        PreseedDevice->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
""));
        installoptionsnextButton = new QPushButton(PreseedDevice);
        installoptionsnextButton->setObjectName(QString::fromUtf8("installoptionsnextButton"));
        installoptionsnextButton->setGeometry(QRect(510, 190, 65, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        installoptionsnextButton->setFont(font);
        installoptionsnextButton->setCursor(QCursor(Qt::OpenHandCursor));
        installoptionsnextButton->setFocusPolicy(Qt::WheelFocus);
        installoptionsnextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        installoptionsnextButton->setIcon(icon);
        installoptionsnextButton->setIconSize(QSize(32, 32));
        installoptionsnextButton->setAutoDefault(true);
        installoptionsnextButton->setDefault(true);
        installoptionsdescriptionLabel = new QLabel(PreseedDevice);
        installoptionsdescriptionLabel->setObjectName(QString::fromUtf8("installoptionsdescriptionLabel"));
        installoptionsdescriptionLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        installoptionsdescriptionLabel->setFont(font1);
        installoptionsdescriptionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        installoptionsdescriptionLabel->setAlignment(Qt::AlignCenter);
        installoptionsLabel = new QLabel(PreseedDevice);
        installoptionsLabel->setObjectName(QString::fromUtf8("installoptionsLabel"));
        installoptionsLabel->setGeometry(QRect(10, 20, 621, 41));
        installoptionsLabel->setFont(font);
        installoptionsLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        installoptionsLabel->setAlignment(Qt::AlignCenter);
        radiobuttongroupBox = new QGroupBox(PreseedDevice);
        radiobuttongroupBox->setObjectName(QString::fromUtf8("radiobuttongroupBox"));
        radiobuttongroupBox->setGeometry(QRect(220, 130, 221, 41));
        radiobuttongroupBox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        sdinstallradioButton = new QRadioButton(radiobuttongroupBox);
        sdinstallradioButton->setObjectName(QString::fromUtf8("sdinstallradioButton"));
        sdinstallradioButton->setGeometry(QRect(10, 10, 191, 20));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Sans Souce Pro"));
        font2.setPointSize(12);
        sdinstallradioButton->setFont(font2);
        sdinstallradioButton->setFocusPolicy(Qt::WheelFocus);
        sdinstallradioButton->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        sdinstallradioButton->setChecked(true);
        radiobuttongroupBox->raise();
        installoptionsnextButton->raise();
        installoptionsdescriptionLabel->raise();
        installoptionsLabel->raise();
        QWidget::setTabOrder(sdinstallradioButton, installoptionsnextButton);

        retranslateUi(PreseedDevice);

        QMetaObject::connectSlotsByName(PreseedDevice);
    } // setupUi

    void retranslateUi(QWidget *PreseedDevice)
    {
        PreseedDevice->setWindowTitle(QApplication::translate("PreseedDevice", "Form", 0, QApplication::UnicodeUTF8));
        installoptionsnextButton->setText(QString());
        installoptionsdescriptionLabel->setText(QApplication::translate("PreseedDevice", "<html><body>Where would you like to install Onyx?</body></html>", 0, QApplication::UnicodeUTF8));
        installoptionsLabel->setText(QApplication::translate("PreseedDevice", "<html><body>Install options</body></html>", 0, QApplication::UnicodeUTF8));
        radiobuttongroupBox->setTitle(QString());
        sdinstallradioButton->setText(QApplication::translate("PreseedDevice", "on an SD card", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PreseedDevice: public Ui_PreseedDevice {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRESEEDDEVICE_H
