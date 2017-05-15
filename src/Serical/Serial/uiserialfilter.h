#ifndef UISERIALFILTER_H
#define UISERIALFILTER_H
#include "UIDefineInsStruct.h"
#include "UIDefineType.h"
#include "uiqobject.h"
#include <QByteArray>
class UISerialFilter : public UIQObject
{
    Q_OBJECT
public:
    explicit UISerialFilter(QObject *parent = 0);
    void FilterInstruction(QByteArray bytes);
signals:
    void TuneInsReceived(type_TuneInstruction* instruction);
};

#endif // UISERIALFILTER_H
