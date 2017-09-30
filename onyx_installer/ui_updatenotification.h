/********************************************************************************
** Form generated from reading UI file 'updatenotification.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATENOTIFICATION_H
#define UI_UPDATENOTIFICATION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UpdateNotification
{
public:
    QPushButton *languagenextButton;
    QLabel *updateAvailableSubLabel;
    QPushButton *dismissButton;
    QLabel *downloadLinkLabel;
    QLabel *updateLabel;
    QLabel *platformtipLabel;

    void setupUi(QWidget *UpdateNotification)
    {
        if (UpdateNotification->objectName().isEmpty())
            UpdateNotification->setObjectName(QString::fromUtf8("UpdateNotification"));
        UpdateNotification->resize(640, 240);
        UpdateNotification->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
""));
        languagenextButton = new QPushButton(UpdateNotification);
        languagenextButton->setObjectName(QString::fromUtf8("languagenextButton"));
        languagenextButton->setGeometry(QRect(930, 300, 51, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        languagenextButton->setFont(font);
        languagenextButton->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        updateAvailableSubLabel = new QLabel(UpdateNotification);
        updateAvailableSubLabel->setObjectName(QString::fromUtf8("updateAvailableSubLabel"));
        updateAvailableSubLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        updateAvailableSubLabel->setFont(font1);
        updateAvailableSubLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        updateAvailableSubLabel->setAlignment(Qt::AlignCenter);
        dismissButton = new QPushButton(UpdateNotification);
        dismissButton->setObjectName(QString::fromUtf8("dismissButton"));
        dismissButton->setGeometry(QRect(260, 170, 111, 51));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Source Sans Pro"));
        font2.setPointSize(19);
        dismissButton->setFont(font2);
        dismissButton->setCursor(QCursor(Qt::OpenHandCursor));
        dismissButton->setFocusPolicy(Qt::WheelFocus);
        dismissButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        downloadLinkLabel = new QLabel(UpdateNotification);
        downloadLinkLabel->setObjectName(QString::fromUtf8("downloadLinkLabel"));
        downloadLinkLabel->setGeometry(QRect(0, 120, 631, 21));
        downloadLinkLabel->setFont(font1);
        downloadLinkLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        downloadLinkLabel->setAlignment(Qt::AlignCenter);
        updateLabel = new QLabel(UpdateNotification);
        updateLabel->setObjectName(QString::fromUtf8("updateLabel"));
        updateLabel->setGeometry(QRect(10, 20, 621, 41));
        updateLabel->setFont(font);
        updateLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        updateLabel->setAlignment(Qt::AlignCenter);
        platformtipLabel = new QLabel(UpdateNotification);
        platformtipLabel->setObjectName(QString::fromUtf8("platformtipLabel"));
        platformtipLabel->setGeometry(QRect(0, 160, 631, 21));
        platformtipLabel->setFont(font1);
        platformtipLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        platformtipLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(UpdateNotification);

        QMetaObject::connectSlotsByName(UpdateNotification);
    } // setupUi

    void retranslateUi(QWidget *UpdateNotification)
    {
        UpdateNotification->setWindowTitle(QApplication::translate("UpdateNotification", "Form", 0, QApplication::UnicodeUTF8));
        languagenextButton->setText(QApplication::translate("UpdateNotification", "X", 0, QApplication::UnicodeUTF8));
        updateAvailableSubLabel->setText(QApplication::translate("UpdateNotification", "<html><body>An update is available for the Onyx installer</body></html>", 0, QApplication::UnicodeUTF8));
        dismissButton->setText(QApplication::translate("UpdateNotification", "dismiss", 0, QApplication::UnicodeUTF8));
        downloadLinkLabel->setText(QApplication::translate("UpdateNotification", "<html><body>Get it at: </body></html>", 0, QApplication::UnicodeUTF8));
        updateLabel->setText(QApplication::translate("UpdateNotification", "<html><body>Update available</body></html>", 0, QApplication::UnicodeUTF8));
        platformtipLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class UpdateNotification: public Ui_UpdateNotification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATENOTIFICATION_H
