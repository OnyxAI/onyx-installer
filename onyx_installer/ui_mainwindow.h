/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *logoLabel;
    QLabel *label;
    QLabel *spinnerLabel;
    QPushButton *backButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/resources/icon_128x128.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QString::fromUtf8("background: #41bef4"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        logoLabel = new QLabel(centralWidget);
        logoLabel->setObjectName(QString::fromUtf8("logoLabel"));
        logoLabel->setGeometry(QRect(10, 40, 641, 61));
        logoLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        logoLabel->setPixmap(QPixmap(QString::fromUtf8(":/assets/resources/logo.png")));
        logoLabel->setAlignment(Qt::AlignCenter);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 410, 621, 21));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(12);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        label->setAlignment(Qt::AlignCenter);
        spinnerLabel = new QLabel(centralWidget);
        spinnerLabel->setObjectName(QString::fromUtf8("spinnerLabel"));
        spinnerLabel->setGeometry(QRect(300, 220, 81, 51));
        spinnerLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        backButton = new QPushButton(centralWidget);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(520, 360, 65, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(24);
        backButton->setFont(font1);
        backButton->setCursor(QCursor(Qt::OpenHandCursor));
        backButton->setFocusPolicy(Qt::WheelFocus);
        backButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        icon1.addFile(QString::fromUtf8(":/assets/resources/backward.png"), QSize(), QIcon::Normal, QIcon::Off);
        backButton->setIcon(icon1);
        backButton->setIconSize(QSize(32, 32));
        backButton->setAutoDefault(true);
        backButton->setDefault(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome to Onyx", 0, QApplication::UnicodeUTF8));
        logoLabel->setText(QString());
        label->setText(QApplication::translate("MainWindow", "<html><body>\302\251 2017 Onyx</body></html>", 0, QApplication::UnicodeUTF8));
        spinnerLabel->setText(QString());
        backButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
