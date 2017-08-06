#-------------------------------------------------
#
# Project created by QtCreator 2014-07-29T22:28:04
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets network


TARGET = onyx_installer
TEMPLATE = app

SOURCES += main.cpp\
    mainwindow.cpp \
    utils.cpp \
    io.cpp \
    langselection.cpp \
    updatenotification.cpp \
    supporteddevice.cpp \
    versionselection.cpp \
    preseeddevice.cpp \
    licenseagreement.cpp \
    deviceselection.cpp \
    downloadprogress.cpp \
    extractprogress.cpp \
    successdialog.cpp \
    preseeder.cpp \
    extractworker.cpp \
    writeimageworker.cpp \
    diskdevice.cpp

macx {
SOURCES += \
    io_osx.cpp
}

unix:!macx {
SOURCES += \
    io_linux.cpp
}

win32 {
SOURCES += \
    io_windows.cpp
}
LIBS += -lz

win32 {
    INCLUDEPATH += "w32-lib/zlib-1.2.8"
    LIBS += -L./w32-lib/zlib-1.2.8
}

HEADERS  += mainwindow.h \
    utils.h \
    langselection.h \
    updatenotification.h \
    supporteddevice.h \
    versionselection.h \
    preseeddevice.h \
    licenseagreement.h \
    deviceselection.h \
    downloadprogress.h \
    extractprogress.h \
    successdialog.h \
    preseeder.h \
    extractworker.h \
    writeimageworker.h \
    io.h \
    diskdevice.h

FORMS    += mainwindow.ui \
    langselection.ui \
    updatenotification.ui \
    versionselection.ui \
    preseeddevice.ui \
    licenseagreement.ui \
    deviceselection.ui \
    downloadprogress.ui \
    extractprogress.ui \
    successdialog.ui

VERSION = 127

TRANSLATIONS = onyx.ts \
    onyx_fr.ts \

RESOURCES += \
    assets.qrc

CONFIG += static
