/********************************************************************************
** Form generated from reading UI file 'downloadprogress.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADPROGRESS_H
#define UI_DOWNLOADPROGRESS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DownloadProgress
{
public:
    QLabel *downloadLabel;
    QLabel *downloadDescriptionLabel;
    QProgressBar *downloadProgressBar;
    QLabel *downloadDetailsLabel;

    void setupUi(QWidget *DownloadProgress)
    {
        if (DownloadProgress->objectName().isEmpty())
            DownloadProgress->setObjectName(QString::fromUtf8("DownloadProgress"));
        DownloadProgress->resize(640, 240);
        DownloadProgress->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: #41bef4;\n"
""));
        downloadLabel = new QLabel(DownloadProgress);
        downloadLabel->setObjectName(QString::fromUtf8("downloadLabel"));
        downloadLabel->setGeometry(QRect(10, 20, 621, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Source Sans Pro"));
        font.setPointSize(24);
        downloadLabel->setFont(font);
        downloadLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        downloadLabel->setAlignment(Qt::AlignCenter);
        downloadDescriptionLabel = new QLabel(DownloadProgress);
        downloadDescriptionLabel->setObjectName(QString::fromUtf8("downloadDescriptionLabel"));
        downloadDescriptionLabel->setGeometry(QRect(10, 80, 621, 21));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Source Sans Pro"));
        font1.setPointSize(12);
        downloadDescriptionLabel->setFont(font1);
        downloadDescriptionLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        downloadDescriptionLabel->setAlignment(Qt::AlignCenter);
        downloadProgressBar = new QProgressBar(DownloadProgress);
        downloadProgressBar->setObjectName(QString::fromUtf8("downloadProgressBar"));
        downloadProgressBar->setGeometry(QRect(190, 130, 261, 23));
        downloadProgressBar->setValue(0);
        downloadDetailsLabel = new QLabel(DownloadProgress);
        downloadDetailsLabel->setObjectName(QString::fromUtf8("downloadDetailsLabel"));
        downloadDetailsLabel->setGeometry(QRect(10, 180, 621, 21));
        downloadDetailsLabel->setFont(font1);
        downloadDetailsLabel->setStyleSheet(QString::fromUtf8("color: #17394A;\n"
"background: rgb(240, 240, 240, 0);"));
        downloadDetailsLabel->setAlignment(Qt::AlignCenter);

        retranslateUi(DownloadProgress);

        QMetaObject::connectSlotsByName(DownloadProgress);
    } // setupUi

    void retranslateUi(QWidget *DownloadProgress)
    {
        DownloadProgress->setWindowTitle(QApplication::translate("DownloadProgress", "Form", 0, QApplication::UnicodeUTF8));
        downloadLabel->setText(QApplication::translate("DownloadProgress", "<html><body>downloading</body></html>", 0, QApplication::UnicodeUTF8));
        downloadDescriptionLabel->setText(QApplication::translate("DownloadProgress", "<html><body>please wait while we grab the software</body></html>", 0, QApplication::UnicodeUTF8));
        downloadDetailsLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DownloadProgress: public Ui_DownloadProgress {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADPROGRESS_H
