#include "uiserial0.h"

UISerial0::UISerial0(UIAppType::type_SerialConfig* serialConfig,QObject *parent) :
    UIBaseSerial(serialConfig,parent),m_Buffer(new QByteArray())
{
    m_Sender.SetSerial0(this);
    connect(this,SIGNAL(ReadDataFinished(QByteArray)),this,SLOT(on_Serial_ReadDataFinished(QByteArray)));
}
UISerial0::~UISerial0()
{
    delete m_Buffer;
}
void UISerial0::on_Serial_ReadDataFinished(QByteArray data)
{
    /*int nFrameLength=0;
    // 帧长：除帧头以及自身之外的其他数据总字节数。 2个开始标志+命令长度
    int cmdLen2TotalcmdLen = 4;
    while(m_Buffer->count()>0)
    {
        if(m_Buffer->count()<=6)
        {
            break;
        }
        int nHeader1= (int)(m_Buffer->at(0));
        if(nHeader1!=FRAME_HEADER_1)
        {
            //丢弃开始处错误指令头
            m_Buffer->remove(0,1);
            break;
        }
        int nHeader2=(int)(m_Buffer->at(1));
        if(nHeader2!=FRAME_HEADER_1)
        {
            //丢弃开始处错误指令头
            m_Buffer->remove(0,2);
            break;
        }
        QByteArray byte1=m_Buffer->mid(2,2);
        //提取指令长度
        nFrameLength= (int)(byte1.at(0) << 8 | byte1.at(1));
        if(m_Buffer->count()-cmdLen2TotalcmdLen>=nFrameLength)
        {
            int nLength=nFrameLength+cmdLen2TotalcmdLen;
            //提取到一条完整的指令
            QByteArray bytes=m_Buffer->mid(0,nLength);
            //校验
            short int* pVerifyValue =(short int*)bytes.mid(bytes.count()-2,2).data();
            short int nVerifyValue=htobe16(*pVerifyValue);
            short int nRealValue=GetVerifyValue(bytes.mid(2,nLength-4));
            //                if(nVerifyValue==nRealValue)
            //                {
            m_Filter.FilterInstruction(bytes);
            //                }
            //                else
            //                {
            //                    //校验指令错误 //写入日志
            //                    QString error=QString(tr("校验指令错误(%1)")).arg(bytes.toHex().data());
            //                    UILog::UIError(error);
            //                }
            m_Buffer->remove(0,nLength);
        }
        else
        {
            break;
        }
    }
    if(data.count()>0)
    {
        m_Buffer->append(data);
    }*/

    //zhujf
    //m_Buffer->append(data);
    //have data emit signal
    emit SerialDataReady(data);
}

