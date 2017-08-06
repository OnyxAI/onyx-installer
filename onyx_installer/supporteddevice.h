
#ifndef SUPPORTEDDEVICE_H
#define SUPPORTEDDEVICE_H
#include <QString>

class SupportedDevice
{
public:
    SupportedDevice();
    SupportedDevice(QString dName, QString dsName, bool preseedNetwork, bool preseedSD, bool preseedPartitioning);
    QString getDeviceName() { return deviceName; }
    QString getDeviceShortName() { return deviceShortName; }
    bool allowsPreseedingNetwork() { return preseedNetwork; }
    bool allowsPreseedingSD() { return preseedSD; }
    bool allowsPreseedingPartitioning() { return preseedPartitioning; }
private:
    QString deviceName;
    QString deviceShortName;
    bool preseedNetwork;
    bool preseedSD;
    bool preseedPartitioning;
};

#endif // SUPPORTEDDEVICE_H
