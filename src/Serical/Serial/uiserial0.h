#ifndef UISERIAL0_H
#define UISERIAL0_H
#include <QDebug>
#include "uibaseserial.h"
#include "Serial/uiserialfilter.h"
#include "Serial/uiserialsender.h"
class UISerial0 : public UIBaseSerial
{
    Q_OBJECT
public:
    explicit UISerial0(UIAppType::type_SerialConfig* serialConfig,QObject *parent = 0);
    UISerialFilter* GetSerialFilter();
    UISerialSender* GetSerialSender();
    ~UISerial0();
signals:
    void SerialDataReady(QByteArray bytes);

private slots:
    void on_Serial_ReadDataFinished(QByteArray data);
private:
    QByteArray* m_Buffer;
    UISerialFilter m_Filter;
    UISerialSender m_Sender;
};
inline UISerialFilter* UISerial0::GetSerialFilter()
{
    return &m_Filter;
}
inline UISerialSender* UISerial0::GetSerialSender()
{
    return &m_Sender;
}
#endif // UISERIAL0_H
