#ifndef UIQOBJECT_H
#define UIQOBJECT_H
#include <QObject>
#include <QTimer>
#include <QDebug>
#include <QFile>
#include <QDialog>
#include <QApplication>
#include <QMessageBox>
#include "UIDefineInsStruct.h"
#include "UIDefineType.h"
#include "uiqobject.h"
class UIQObject : public QObject
{
    Q_OBJECT
public:
    virtual QString GetDBFullPath(QString dbName) const;
    virtual int CharToInt(char cValue) const;
    virtual int CharToInt(char* cValue);
    virtual short int CharToShortInt(char* cValue);
    virtual QTime GetQTime(int Houre,int Minute,int Second) const;

public:
    explicit UIQObject(QObject *parent = 0);
    ~UIQObject();
    qint64 virtual CreatePrimaryKey();

signals:
    
public slots:

private:

};
Q_DECLARE_METATYPE(UIAppType::EnumGPSCoordOrientTypes)
Q_DECLARE_METATYPE(UIAppType::type_Channel*)
#endif // UIQOBJECT_H
