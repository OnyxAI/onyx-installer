
#include "supporteddevice.h"
#include <QString>

SupportedDevice::SupportedDevice()
{
}

SupportedDevice::SupportedDevice(QString dName, QString dsName, bool preseedNetwork, bool preseedSD, bool preseedPartitioning)
{
    this->deviceName = dName;
    this->deviceShortName = dsName;
    this->preseedNetwork = preseedNetwork;
    this->preseedSD = preseedSD;
    this->preseedPartitioning = preseedPartitioning;
}
