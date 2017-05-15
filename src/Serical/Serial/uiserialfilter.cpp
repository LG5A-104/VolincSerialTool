#include "uiserialfilter.h"
#include "QKeyEvent"
UISerialFilter::UISerialFilter(QObject *parent) :
    UIQObject(parent)
{

}
void UISerialFilter::FilterInstruction(QByteArray bytes)
{
    //QKeyEvent key;
    //QApplication::postEvent(qApp->activeWindow(), new QKeyEvent(QEvent::KeyPress, Qt::Key_X, 'X', 0));
    //QEvent* key =  new QKeyEvent(QEvent::KeyPress,Qt::Key_X, Qt::META, 'X', 0);

    //QApplication::postEvent(qApp->activeWindow(), new QKeyEvent(QEvent::KeyPress, Qt::Key_X, Qt::META));
    //第7位为指令代码
    unsigned char uchar=(unsigned char)bytes.at(6);
    int nInsCode=(int)uchar;
    if(nInsCode!=INS_CODE_StatusReport)
    {
        //UILog::UIInfo("R="+bytes.toHex());
        qDebug()<<"Receive_From_CoreBoard : "+bytes.toHex();
    }
    switch(nInsCode)
    {
    case INS_CODE_Turn:
    {
        type_TuneInstruction* turnIns=(type_TuneInstruction*)bytes.data();
        emit TuneInsReceived(turnIns);
        break;
    }
    case INS_CODE_SSB:
    {
        type_SSBInstruction* ssbIns=(type_SSBInstruction*)bytes.data();
        //emit SSBInsReceived(ssbIns);
        break;
    }
    defalut:
        break;
    }
}



