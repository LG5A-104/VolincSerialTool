#include "uibaseserial.h"
#include <QDebug>
#include <QFileInfo>
#define SerialTimeOut 50;

UIBaseSerial::UIBaseSerial(UIAppType::type_SerialConfig* serialConfig,QObject *parent) :
    QThread(parent),m_Serial(0),m_StopReadSerial(false)
{
    m_PortName=serialConfig->s_SerialPortName;
    m_Baudrate=serialConfig->s_SerialBaudrate;
    m_StopBit=serialConfig->s_SerialStopBit;
    m_Parity=serialConfig->s_SerialParity;
    int timeOut=SerialTimeOut;
    //struct PortSettings myComSetting ={GetBaudRateType(),DATA_8,GetParityType(),GetStopBitsType(),FLOW_OFF,timeOut};
    //m_Serial=new Posix_QextSerialPort(m_PortName,myComSetting);

    QFileInfo serialFile(m_PortName);
    if(serialFile.exists()==true)
        m_Serial= new Posix_QextSerialPort(m_PortName,QextSerialBase::Polling);            //embedded默认使用com2作为数据口
    else
    {
        qDebug()<<tr("Can not find portdevice:")<<m_PortName;
        return;
    }
    m_Serial->setBaudRate(GetBaudRateType());
    m_Serial->setDataBits(DATA_8);
    m_Serial->setParity(GetParityType());
    m_Serial->setStopBits(GetStopBitsType());
    m_Serial->setFlowControl(FLOW_OFF);
    m_Serial->setTimeout(timeOut);

    //set follow parameter may cause /dev/ttyOx device writeonly file,can not read data from device
    //m_Serial->setRts(false);
    //m_Serial->setDtr(false);
    //m_Serial->setFlowControl(FLOW_OFF);

    //m_Serial->setTextModeEnabled(true);
}
BaudRateType UIBaseSerial::GetBaudRateType()
{
    BaudRateType result=BAUD9600;
    switch(m_Baudrate)
    {
    case 110:
        result=BAUD110;
        break;
    case 300:
        result=BAUD300;
        break;
    case 600:
        result=BAUD600;
        break;
    case 1200:
        result=BAUD1200;
        break;
    case 1800:
        result=BAUD1800;
        break;
    case 2400:
        result=BAUD2400;
        break;
    case 4800:
        result=BAUD4800;
        break;
    case 14400:
        result=BAUD110;
        break;
    case 19200:
        result=BAUD19200;
        break;
    case 38400:
        result=BAUD38400;
        break;
    case 56000:
        result=BAUD56000;
        break;
    case 57600:
        result=BAUD57600;
        break;
    case 76800:
        result=BAUD76800;
        break;
    case 115200:
        result=BAUD115200;
        break;
    case 128000:
        result=BAUD128000;
        break;
    case 256000:
        result=BAUD256000;
        break;
    }
    return result;
}
ParityType  UIBaseSerial::GetParityType()
{
    ParityType parity=PAR_NONE;
    switch(m_Parity)
    {
    case 1:
        parity=PAR_ODD;
        break;
    case 2:
        parity=PAR_EVEN;
        break;
    case 3:
        parity=PAR_MARK;
        break;
    case 4:
        parity=PAR_SPACE;
        break;
    }
    return  parity;
}
StopBitsType UIBaseSerial::GetStopBitsType()
{
    StopBitsType stopBit=STOP_1;
    switch(m_Parity)
    {
    case 1:
        break;
    case 2:
        stopBit=STOP_1_5;
        break;
    case 3:
        stopBit=STOP_2;
        break;
    }
    return  stopBit;
}
bool UIBaseSerial::Open()
{
    if(m_Serial!=0)
    {
        if(m_Serial->open(QIODevice::ReadWrite))
        {
            m_StopReadSerial=false;
            qDebug()<< tr("ReadWrite OPEN Serial");
            this->start();
            return true;
        }
    }
    return false;
}
void UIBaseSerial::run()
{
    ReadData();
}
bool UIBaseSerial::Close()
{
    if(m_Serial!=0 && m_Serial->isOpen())
    {
        m_Serial->close();
    }
    m_StopReadSerial=true;
    this->wait();
    return true;
}
QString UIBaseSerial::GetError() const
{
    if(m_Serial==0)
    {
        QString str;
        str = m_PortName+tr(":Serial COM create erro!");
        return str;
    }
    return m_Serial->errorString();
}

qint64 UIBaseSerial::WriteData(char *data,qint64 len)
{
    if(m_Serial!=0)
    {
        return m_Serial->write(data,len);
    }
    return -1;
}

void UIBaseSerial::ReadData()
{
    while(!m_StopReadSerial)
    {
        //delay 5ms
        msleep(100);
        //读取串口缓冲区的所有数据给临时变量temp
        if(!m_Serial->isOpen())
        {
            break;
        }
        QByteArray temp = m_Serial->readAll();
        emit ReadDataFinished(temp);
    }
}
short int UIBaseSerial::GetVerifyValue(QByteArray bytes)
{
    //qDebug()<<"需要计算的字节"+bytes.toHex();
    short int sum=0;
    for(int n=0;n<bytes.count();n++)
    {
        unsigned char uchar=(unsigned char)bytes.at(n);
        int nNumber=(int)uchar;
        //qDebug()<<"nNumber="+QString::number(nNumber);
        sum+=nNumber;
    }
    return sum;
}
