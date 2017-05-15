#ifndef UIBASESERIAL_H
#define UIBASESERIAL_H

#include <QObject>
#include <QThread>
#include <QDebug>
#include "UIDefineType.h"
#include "Serial/QextSerial/posix_qextserialport.h"
#include "Serial/uiserialfilter.h"
#include "Serial/uiserialsender.h"
class UIBaseSerial : public QThread
{
    Q_OBJECT
protected:
    Posix_QextSerialPort* m_Serial;
    BaudRateType GetBaudRateType();
    DataBitsType GetDataBitsType();
    ParityType   GetParityType();
    StopBitsType GetStopBitsType();

    void ReadData();
    void run();
public:
    explicit UIBaseSerial(UIAppType::type_SerialConfig* serialConfig, QObject *parent = 0);
    bool Open();
    bool Close();
    QString GetError() const;
    virtual qint64 WriteData(char* data,qint64 len);
    short int GetVerifyValue(QByteArray bytes);
public:

signals:
    void ReadDataFinished(QByteArray str);
public slots:

private:
    QString m_PortName;
    int m_Baudrate;
    int m_StopBit;
    int m_Parity;

public:
    bool m_StopReadSerial;

};

#endif // UIBASESERIAL_H
