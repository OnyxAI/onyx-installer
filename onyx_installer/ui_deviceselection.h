/********************************************************************************
** Form generated from reading UI file 'deviceselection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICESELECTION_H
#define UI_DEVICESELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceSelection
{
public:
    QLabel *deviceSelectionLabel;
    QLabel *deviceSelectionDescLabel;
    QPushButton *devicenextButton;
    QPushButton *refreshButton;
    QListWidget *devListWidget;

    void setupUi(QWidget *DeviceSelection)
    {
        if (DeviceSelection->objectName().isEmpty())
            DeviceSelection->setObjectName(QString::fromUtf8("DeviceSelection"));
        DeviceSelection->resize(640, 240);
        DeviceSelection->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: #41bef4;"));
        deviceSelectionLabel = new QLabel(DeviceSelection);
        deviceSelectionLabel->setObjectName(QString::fromUtf8("deviceSelectionLabel"));
        deviceSelectionLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        deviceSelectionLabel->setFont(font);
        deviceSelectionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        deviceSelectionLabel->setAlignment(Qt::AlignCenter);
        deviceSelectionDescLabel = new QLabel(DeviceSelection);
        deviceSelectionDescLabel->setObjectName(QString::fromUtf8("deviceSelectionDescLabel"));
        deviceSelectionDescLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        deviceSelectionDescLabel->setFont(font1);
        deviceSelectionDescLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        deviceSelectionDescLabel->setAlignment(Qt::AlignCenter);
        devicenextButton = new QPushButton(DeviceSelection);
        devicenextButton->setObjectName(QString::fromUtf8("devicenextButton"));
        devicenextButton->setGeometry(QRect(510, 200, 65, 41));
        devicenextButton->setFont(font);
        devicenextButton->setCursor(QCursor(Qt::OpenHandCursor));
        devicenextButton->setFocusPolicy(Qt::WheelFocus);
        devicenextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        devicenextButton->setIcon(icon);
        devicenextButton->setIconSize(QSize(32, 32));
        devicenextButton->setAutoDefault(true);
        devicenextButton->setDefault(true);
        refreshButton = new QPushButton(DeviceSelection);
        refreshButton->setObjectName(QString::fromUtf8("refreshButton"));
        refreshButton->setGeometry(QRect(10, 200, 81, 41));
        refreshButton->setFont(font1);
        refreshButton->setCursor(QCursor(Qt::OpenHandCursor));
        refreshButton->setFocusPolicy(Qt::WheelFocus);
        refreshButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        refreshButton->setAutoDefault(true);
        refreshButton->setDefault(true);
        devListWidget = new QListWidget(DeviceSelection);
        devListWidget->setObjectName(QString::fromUtf8("devListWidget"));
        devListWidget->setGeometry(QRect(90, 110, 451, 81));
        devListWidget->setFont(font1);
        devListWidget->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);"));
        QWidget::setTabOrder(devListWidget, devicenextButton);
        QWidget::setTabOrder(devicenextButton, refreshButton);

        retranslateUi(DeviceSelection);

        QMetaObject::connectSlotsByName(DeviceSelection);
    } // setupUi

    void retranslateUi(QWidget *DeviceSelection)
    {
        DeviceSelection->setWindowTitle(QApplication::translate("DeviceSelection", "Form", 0, QApplication::UnicodeUTF8));
        deviceSelectionLabel->setText(QApplication::translate("DeviceSelection", "<html><body>device selection</body></html>", 0, QApplication::UnicodeUTF8));
        deviceSelectionDescLabel->setText(QApplication::translate("DeviceSelection", "<html><body>where would you like to install Onyx?</body></html>", 0, QApplication::UnicodeUTF8));
        devicenextButton->setText(QString());
        refreshButton->setText(QApplication::translate("DeviceSelection", "refresh", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DeviceSelection: public Ui_DeviceSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICESELECTION_H
