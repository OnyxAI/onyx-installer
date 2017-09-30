/********************************************************************************
** Form generated from reading UI file 'successdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUCCESSDIALOG_H
#define UI_SUCCESSDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SuccessDialog
{
public:
    QLabel *successDescLabel;
    QLabel *successTitleLabel;
    QPushButton *closeInstallerButton;
    QPushButton *twitterButton;
    QPushButton *facebookButton;

    void setupUi(QWidget *SuccessDialog)
    {
        if (SuccessDialog->objectName().isEmpty())
            SuccessDialog->setObjectName(QString::fromUtf8("SuccessDialog"));
        SuccessDialog->resize(640, 240);
        SuccessDialog->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);"));
        successDescLabel = new QLabel(SuccessDialog);
        successDescLabel->setObjectName(QString::fromUtf8("successDescLabel"));
        successDescLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(12);
        successDescLabel->setFont(font);
        successDescLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        successDescLabel->setAlignment(Qt::AlignCenter);
        successTitleLabel = new QLabel(SuccessDialog);
        successTitleLabel->setObjectName(QString::fromUtf8("successTitleLabel"));
        successTitleLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(24);
        successTitleLabel->setFont(font1);
        successTitleLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        successTitleLabel->setAlignment(Qt::AlignCenter);
        closeInstallerButton = new QPushButton(SuccessDialog);
        closeInstallerButton->setObjectName(QString::fromUtf8("closeInstallerButton"));
        closeInstallerButton->setGeometry(QRect(260, 150, 131, 61));
        closeInstallerButton->setFont(font1);
        closeInstallerButton->setCursor(QCursor(Qt::OpenHandCursor));
        closeInstallerButton->setFocusPolicy(Qt::WheelFocus);
        closeInstallerButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        twitterButton = new QPushButton(SuccessDialog);
        twitterButton->setObjectName(QString::fromUtf8("twitterButton"));
        twitterButton->setGeometry(QRect(280, 110, 41, 31));
        twitterButton->setCursor(QCursor(Qt::OpenHandCursor));
        twitterButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon.addFile(QString::fromUtf8(":/assets/resources/twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        twitterButton->setIcon(icon);
        facebookButton = new QPushButton(SuccessDialog);
        facebookButton->setObjectName(QString::fromUtf8("facebookButton"));
        facebookButton->setGeometry(QRect(330, 110, 41, 31));
        facebookButton->setCursor(QCursor(Qt::OpenHandCursor));
        facebookButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/assets/resources/fb.png"), QSize(), QIcon::Normal, QIcon::Off);
        facebookButton->setIcon(icon1);

        retranslateUi(SuccessDialog);

        QMetaObject::connectSlotsByName(SuccessDialog);
    } // setupUi

    void retranslateUi(QWidget *SuccessDialog)
    {
        SuccessDialog->setWindowTitle(QApplication::translate("SuccessDialog", "Form", 0, QApplication::UnicodeUTF8));
        successDescLabel->setText(QApplication::translate("SuccessDialog", "<html><body>You're ready for use Onyx!</body></html>", 0, QApplication::UnicodeUTF8));
        successTitleLabel->setText(QApplication::translate("SuccessDialog", "<html><body>Congratulations</body></html>", 0, QApplication::UnicodeUTF8));
        closeInstallerButton->setText(QApplication::translate("SuccessDialog", "quit", 0, QApplication::UnicodeUTF8));
        twitterButton->setText(QString());
        facebookButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SuccessDialog: public Ui_SuccessDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUCCESSDIALOG_H
