/********************************************************************************
** Form generated from reading UI file 'langselection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LANGSELECTION_H
#define UI_LANGSELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LangSelection
{
public:
    QLabel *welcomeLabel;
    QLabel *languageSelectionLabel;
    QComboBox *languageSelectionBox;
    QLabel *deviceSelectionLabel;
    QComboBox *deviceSelectionBox;
    QPushButton *languagenextButton;

    void setupUi(QWidget *LangSelection)
    {
        if (LangSelection->objectName().isEmpty())
            LangSelection->setObjectName(QString::fromUtf8("LangSelection"));
        LangSelection->resize(640, 240);
        LangSelection->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: #41bef4;\n"
""));
        welcomeLabel = new QLabel(LangSelection);
        welcomeLabel->setObjectName(QString::fromUtf8("welcomeLabel"));
        welcomeLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        welcomeLabel->setFont(font);
        welcomeLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        welcomeLabel->setAlignment(Qt::AlignCenter);
        languageSelectionLabel = new QLabel(LangSelection);
        languageSelectionLabel->setObjectName(QString::fromUtf8("languageSelectionLabel"));
        languageSelectionLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        languageSelectionLabel->setFont(font1);
        languageSelectionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        languageSelectionLabel->setAlignment(Qt::AlignCenter);
        languageSelectionBox = new QComboBox(LangSelection);
        languageSelectionBox->setObjectName(QString::fromUtf8("languageSelectionBox"));
        languageSelectionBox->setGeometry(QRect(250, 120, 141, 22));
        languageSelectionBox->setFont(font1);
        languageSelectionBox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
"selection-background-color: rgb(210, 210, 210);"));
        languageSelectionBox->setFrame(true);
        deviceSelectionLabel = new QLabel(LangSelection);
        deviceSelectionLabel->setObjectName(QString::fromUtf8("deviceSelectionLabel"));
        deviceSelectionLabel->setGeometry(QRect(10, 160, 621, 21));
        deviceSelectionLabel->setFont(font1);
        deviceSelectionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        deviceSelectionLabel->setAlignment(Qt::AlignCenter);
        deviceSelectionBox = new QComboBox(LangSelection);
        deviceSelectionBox->setObjectName(QString::fromUtf8("deviceSelectionBox"));
        deviceSelectionBox->setGeometry(QRect(250, 190, 141, 22));
        deviceSelectionBox->setFont(font1);
        deviceSelectionBox->setAutoFillBackground(false);
        deviceSelectionBox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
"selection-background-color: rgb(210, 210, 210);\n"
""));
        deviceSelectionBox->setMaxVisibleItems(10);
        languagenextButton = new QPushButton(LangSelection);
        languagenextButton->setObjectName(QString::fromUtf8("languagenextButton"));
        languagenextButton->setGeometry(QRect(510, 190, 65, 41));
        languagenextButton->setFont(font);
        languagenextButton->setCursor(QCursor(Qt::OpenHandCursor));
        languagenextButton->setFocusPolicy(Qt::WheelFocus);
        languagenextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"color:#17394A;\n"
"background: qradialgradient(cx: 0.3, cy: -0.4,\n"
"fx: 0.3, fy: -0.4,\n"
"radius: 1.35, stop: 0 rgb(240,240,240), stop: 1 rgb(210,210,210));\n"
"border-radius: 11px;\n"
"}\n"
"\n"
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
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/assets/resources/forward.png"), QSize(), QIcon::Normal, QIcon::Off);
        languagenextButton->setIcon(icon);
        languagenextButton->setIconSize(QSize(32, 32));
        languagenextButton->setAutoDefault(true);
        languagenextButton->setDefault(true);
        QWidget::setTabOrder(languageSelectionBox, deviceSelectionBox);
        QWidget::setTabOrder(deviceSelectionBox, languagenextButton);

        retranslateUi(LangSelection);

        QMetaObject::connectSlotsByName(LangSelection);
    } // setupUi

    void retranslateUi(QWidget *LangSelection)
    {
        LangSelection->setWindowTitle(QApplication::translate("LangSelection", "Form", 0, QApplication::UnicodeUTF8));
        welcomeLabel->setText(QApplication::translate("LangSelection", "<html><body>Welcome</body></html>", 0, QApplication::UnicodeUTF8));
        languageSelectionLabel->setText(QApplication::translate("LangSelection", "<html><body>Please select your language to begin</body></html>", 0, QApplication::UnicodeUTF8));
        languageSelectionBox->clear();
        languageSelectionBox->insertItems(0, QStringList()
         << QApplication::translate("LangSelection", "--- Please Select ---", 0, QApplication::UnicodeUTF8)
        );
        deviceSelectionLabel->setText(QApplication::translate("LangSelection", "<html><body>What would you like to install Onyx on?</body></html>", 0, QApplication::UnicodeUTF8));
        deviceSelectionBox->clear();
        deviceSelectionBox->insertItems(0, QStringList()
         << QApplication::translate("LangSelection", "--- Please Select ---", 0, QApplication::UnicodeUTF8)
        );
        languagenextButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class LangSelection: public Ui_LangSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LANGSELECTION_H
