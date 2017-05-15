#ifndef UISERIALSENDER_H
#define UISERIALSENDER_H
#include "UIDefineInsStruct.h"
#include "uiqobject.h"
class UIBaseSerial;
class UISerial0;
class UISerialSender : public UIQObject
{
    Q_OBJECT
public:
    explicit UISerialSender(QObject *parent = 0);
public:
    //单边带指令
    void SetSerial0(UISerial0* serial);
    void SendTuneIns(type_TuneInstruction* ins);
    //void On_NBDPMessageInsFromNBDP(QByteArray bytes);
private:
    UISerial0* m_serial;
};

#endif // UISERIALSENDER_H
