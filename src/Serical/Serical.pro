#-------------------------------------------------
#
# Project created by QtCreator 2017-05-08T09:11:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Serical
TEMPLATE = app
MOC_DIR             = temp/moc
RCC_DIR             = temp/rcc
UI_DIR              = temp/ui
OBJECTS_DIR         = temp/obj
DESTDIR             = bin


SOURCES += main.cpp\
        mainwindow.cpp \
    Serial/uiserialsender.cpp \
    Serial/uiserialfilter.cpp \
    Serial/uiserial0.cpp \
    Serial/uibaseserial.cpp \
    uiqobject.cpp \
    Serial/QextSerial/qextserialport.cpp \
    Serial/QextSerial/qextserialbase.cpp \
    Serial/QextSerial/posix_qextserialport.cpp

HEADERS  += mainwindow.h \
    Serial/uiserialsender.h \
    Serial/uiserialfilter.h \
    Serial/uiserial0.h \
    Serial/uibaseserial.h \
    uiqobject.h \
    UIDefineType.h \
    UIDefineInsStruct.h \
    UIDefineAppConst.h \
    Serial/QextSerial/qextserialport.h \
    Serial/QextSerial/qextserialbase.h \
    Serial/QextSerial/posix_qextserialport.h

FORMS    += mainwindow.ui

RESOURCES += \
    fd-13.qrc
