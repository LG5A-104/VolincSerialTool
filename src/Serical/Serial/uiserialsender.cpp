#include "uiserialsender.h"
#include "Serial/uiserial0.h"
#include "uiqobject.h"

UISerialSender::UISerialSender(QObject *parent) :
    UIQObject(parent)
{
    //connect(g_Serial1->GetSerialFilter1(),SIGNAL(NBDPMessageInsFromNBDP(QByteArray)),this,SLOT(On_NBDPMessageInsFromNBDP(QByteArray)));
}
void UISerialSender::SetSerial0(UISerial0 *serial)
{
    m_serial=serial;
}
void UISerialSender::SendTuneIns(type_TuneInstruction* ins)
{
    QByteArray bytes;
    bytes.append((char*)ins,sizeof(type_TuneInstruction));
    //计算校验值
    short int nVerifyValue= m_serial->GetVerifyValue(bytes.mid(2,bytes.count()-2));
    short int nVerifyValue1=be16toh(nVerifyValue);
    bytes.remove(bytes.count()-2,2);
    bytes.append((char*)&nVerifyValue1,sizeof(nVerifyValue1));
    //UILog::UIInfo("S="+bytes.toHex());
    qDebug()<<"Send_TuneIns_To_CoreBoard : "+bytes.toHex();
    //写入串口
    m_serial->WriteData(bytes.data(),bytes.length());
}
