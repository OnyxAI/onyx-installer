/********************************************************************************
** Form generated from reading UI file 'versionselection.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONSELECTION_H
#define UI_VERSIONSELECTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VersionSelection
{
public:
    QLabel *versionLabel;
    QLabel *versionSelectionLabel;
    QPushButton *versionnextButton;
    QComboBox *versionSelectionBox;
    QCheckBox *useLocalBuildCheckbox;

    void setupUi(QWidget *VersionSelection)
    {
        if (VersionSelection->objectName().isEmpty())
            VersionSelection->setObjectName(QString::fromUtf8("VersionSelection"));
        VersionSelection->resize(640, 240);
        VersionSelection->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
""));
        versionLabel = new QLabel(VersionSelection);
        versionLabel->setObjectName(QString::fromUtf8("versionLabel"));
        versionLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        versionLabel->setFont(font);
        versionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        versionLabel->setAlignment(Qt::AlignCenter);
        versionSelectionLabel = new QLabel(VersionSelection);
        versionSelectionLabel->setObjectName(QString::fromUtf8("versionSelectionLabel"));
        versionSelectionLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        versionSelectionLabel->setFont(font1);
        versionSelectionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        versionSelectionLabel->setAlignment(Qt::AlignCenter);
        versionnextButton = new QPushButton(VersionSelection);
        versionnextButton->setObjectName(QString::fromUtf8("versionnextButton"));
        versionnextButton->setGeometry(QRect(510, 190, 65, 41));
        versionnextButton->setFont(font);
        versionnextButton->setCursor(QCursor(Qt::OpenHandCursor));
        versionnextButton->setFocusPolicy(Qt::WheelFocus);
        versionnextButton->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
        versionnextButton->setIcon(icon);
        versionnextButton->setIconSize(QSize(32, 32));
        versionnextButton->setAutoDefault(true);
        versionnextButton->setDefault(true);
        versionSelectionBox = new QComboBox(VersionSelection);
        versionSelectionBox->setObjectName(QString::fromUtf8("versionSelectionBox"));
        versionSelectionBox->setGeometry(QRect(250, 120, 141, 22));
        versionSelectionBox->setFont(font1);
        versionSelectionBox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240);\n"
"selection-background-color: rgb(210, 210, 210);\n"
""));
        versionSelectionBox->setFrame(true);
        useLocalBuildCheckbox = new QCheckBox(VersionSelection);
        useLocalBuildCheckbox->setObjectName(QString::fromUtf8("useLocalBuildCheckbox"));
        useLocalBuildCheckbox->setGeometry(QRect(210, 170, 291, 17));
        useLocalBuildCheckbox->setFont(font1);
        useLocalBuildCheckbox->setFocusPolicy(Qt::WheelFocus);
        useLocalBuildCheckbox->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        QWidget::setTabOrder(versionSelectionBox, useLocalBuildCheckbox);
        QWidget::setTabOrder(useLocalBuildCheckbox, versionnextButton);

        retranslateUi(VersionSelection);

        QMetaObject::connectSlotsByName(VersionSelection);
    } // setupUi

    void retranslateUi(QWidget *VersionSelection)
    {
        VersionSelection->setWindowTitle(QApplication::translate("VersionSelection", "Form", 0, QApplication::UnicodeUTF8));
        versionLabel->setText(QApplication::translate("VersionSelection", "<html><body>Select version</body></html>", 0, QApplication::UnicodeUTF8));
        versionSelectionLabel->setText(QApplication::translate("VersionSelection", "<html><body>Please select what version you would like</body></html>", 0, QApplication::UnicodeUTF8));
        versionnextButton->setText(QString());
        versionSelectionBox->clear();
        versionSelectionBox->insertItems(0, QStringList()
         << QApplication::translate("VersionSelection", "--- Please Select ---", 0, QApplication::UnicodeUTF8)
        );
        useLocalBuildCheckbox->setText(QApplication::translate("VersionSelection", "use a local build on my computer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VersionSelection: public Ui_VersionSelection {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONSELECTION_H
