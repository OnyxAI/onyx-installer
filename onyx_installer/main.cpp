
#include <QApplication>
#include "mainwindow.h"
#include "utils.h"
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    #ifdef Q_OS_MAC
    utils::writeLog("Onyx Installer running on Mac OS X");
    #endif
    #if defined(Q_OS_WIN) || defined(Q_OS_WIN32)
    utils::writeLog("Onyx Installer running on Windows");
    #endif
    #ifdef Q_OS_LINUX
    utils::writeLog("Onyx Installer running on Linux");
    #endif
    QFontDatabase fontDatabase;
    fontDatabase.addApplicationFont(":/assets/resources/SourceSansPro-Regular.ttf");
    MainWindow w;
    w.show();
    #ifdef Q_OS_MAC
    w.raise();
    #endif
    w.activateWindow();
    return a.exec();
}
