
#include "preseeder.h"
#include "utils.h"
#include <QStringList>
#include "mainwindow.h"
#include <QString>

Preseeder::Preseeder()
{
    preseedStringList = QStringList();
}

void Preseeder::setLanguageString(QString locale)
{
    writeOption("globe", "locale", PRESEED_STRING, locale);
}


void Preseeder::setTargetSettings(MainWindow *mw)
{
    if (mw->getInstallType() == utils::INSTALL_SD)
        writeOption("target", "storage", PRESEED_STRING, "sd");
    if (mw->getInstallType() == utils::INSTALL_NOPRESEED)
        writeOption("target", "storage", PRESEED_STRING, "nops");
    if (mw->getInstallType() == utils::INSTALL_PARTITIONER)
        writeOption("target", "storage", PRESEED_STRING, "partition");
}

void Preseeder::writeOption(QString preseedSection, QString preseedOptionKey, int preseedOptionType, QString preseedOptionValue)
{
    QString toWrite;
    toWrite = "d-i " + preseedSection + "/" + preseedOptionKey;
    switch (preseedOptionType)
    {
    case PRESEED_STRING:
        toWrite += " string ";
        break;
    case PRESEED_BOOL:
        toWrite += " boolean ";
        break;
    }
    toWrite += preseedOptionValue;
    utils::writeLog("Adding preseed string" + toWrite);
    preseedStringList << toWrite;
}
