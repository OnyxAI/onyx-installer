/********************************************************************************
** Form generated from reading UI file 'extractprogress.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXTRACTPROGRESS_H
#define UI_EXTRACTPROGRESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExtractProgress
{
public:
    QLabel *extractDetailsLabel;
    QLabel *extractDescriptionLabel;
    QLabel *extractProgressLabel;
    QProgressBar *extractProgressBar;
    QLabel *extractDetailsLabel_2;

    void setupUi(QWidget *ExtractProgress)
    {
        if (ExtractProgress->objectName().isEmpty())
            ExtractProgress->setObjectName(QString::fromUtf8("ExtractProgress"));
        ExtractProgress->resize(640, 272);
        ExtractProgress->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: #41bef4;\n"
""));
        extractDetailsLabel = new QLabel(ExtractProgress);
        extractDetailsLabel->setObjectName(QString::fromUtf8("extractDetailsLabel"));
        extractDetailsLabel->setGeometry(QRect(10, 190, 621, 71));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(12);
        extractDetailsLabel->setFont(font);
        extractDetailsLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        extractDetailsLabel->setAlignment(Qt::AlignCenter);
        extractDescriptionLabel = new QLabel(ExtractProgress);
        extractDescriptionLabel->setObjectName(QString::fromUtf8("extractDescriptionLabel"));
        extractDescriptionLabel->setGeometry(QRect(10, 80, 621, 21));
        extractDescriptionLabel->setFont(font);
        extractDescriptionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        extractDescriptionLabel->setAlignment(Qt::AlignCenter);
        extractProgressLabel = new QLabel(ExtractProgress);
        extractProgressLabel->setObjectName(QString::fromUtf8("extractProgressLabel"));
        extractProgressLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(24);
        extractProgressLabel->setFont(font1);
        extractProgressLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        extractProgressLabel->setAlignment(Qt::AlignCenter);
        extractProgressBar = new QProgressBar(ExtractProgress);
        extractProgressBar->setObjectName(QString::fromUtf8("extractProgressBar"));
        extractProgressBar->setGeometry(QRect(210, 130, 261, 23));
        extractProgressBar->setValue(0);
        extractDetailsLabel_2 = new QLabel(ExtractProgress);
        extractDetailsLabel_2->setObjectName(QString::fromUtf8("extractDetailsLabel_2"));
        extractDetailsLabel_2->setGeometry(QRect(10, 160, 621, 21));
        extractDetailsLabel_2->setFont(font);
        extractDetailsLabel_2->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);\n"
""));
        extractDetailsLabel_2->setAlignment(Qt::AlignCenter);

        retranslateUi(ExtractProgress);

        QMetaObject::connectSlotsByName(ExtractProgress);
    } // setupUi

    void retranslateUi(QWidget *ExtractProgress)
    {
        ExtractProgress->setWindowTitle(QApplication::translate("ExtractProgress", "Form", 0, QApplication::UnicodeUTF8));
        extractDetailsLabel->setText(QString());
        extractDescriptionLabel->setText(QApplication::translate("ExtractProgress", "<html><body>Onyx is now being installed to your device</body></html>", 0, QApplication::UnicodeUTF8));
        extractProgressLabel->setText(QApplication::translate("ExtractProgress", "<html><body>installing</body></html>", 0, QApplication::UnicodeUTF8));
        extractDetailsLabel_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExtractProgress: public Ui_ExtractProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXTRACTPROGRESS_H
