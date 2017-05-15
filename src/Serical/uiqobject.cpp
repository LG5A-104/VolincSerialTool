#include "uiqobject.h"
#include <QDataStream>
#include <QDir>
#include <QFile>
#include <QIODevice>
#include "math.h"
#include "qmath.h"
UIQObject::UIQObject(QObject *parent) :
    QObject(parent)
{

}
UIQObject::~UIQObject()
{


}

QString UIQObject::GetDBFullPath(QString dbName) const
{
    QString path=  qApp->applicationDirPath();
    path.append("/db/");
    path.append(dbName);
    return path;
}
QTime UIQObject::GetQTime(int Houre, int Minute, int Second) const
{
    QString szHH;
    szHH=szHH.sprintf("%.2d",Houre);
    QString szMM;
    szMM=szMM.sprintf("%.2d",Minute);
    QString szSS;
    szSS=szSS.sprintf("%.2d",Second);
    QString szTime=QString("%1:%2:%3").arg(szHH).arg(szMM).arg(szSS);
    return QTime::fromString(szTime,"hh:mm:ss");
}

int UIQObject::CharToInt(char cValue) const
{
    unsigned char uchar=(unsigned char)cValue;
    return (int)uchar;
}
int UIQObject::CharToInt(char *cValue)
{
    unsigned  int*  pN=(unsigned  int*)cValue;
    unsigned  int n=*pN;
    return n;
}
short int UIQObject::CharToShortInt(char *cValue)
{
    unsigned short int*  pN=(unsigned short int*)cValue;
    unsigned short int n=*pN;
    return n;
}

qint64  UIQObject::CreatePrimaryKey()
{
    QString strKey=QDateTime::currentDateTime().toString("yyyyMMddHHmmsszzz");
    return strKey.toLongLong();
}
