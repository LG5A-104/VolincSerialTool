#include <QApplication>
#include "mainwindow.h"
#include <QFont>
#include <QTextCodec>
#include <QFontDatabase>
#include "./Serial/uiserial0.h"

#define UIFONT_YH "msyh.ttf"
#define UIFONT_YHB "msyhbd.ttf"
#define UIFONT_CALIBR_I "calibri.ttf"
#define UIFONT_CALIBR_IB "calibrib.ttf"
#define UIFONT_CALIBR_II "calibrii.ttf"
#define UIFONT_CALIBR_IZ "calibriz.ttf"

UISerial0* g_Serial0;
MainWindow* g_MainWindow;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //配置文字编码方式
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF-8"));
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));

    //配置字体
    QString szFontsPath=qApp->applicationDirPath()+"/Font/";
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_YH);
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_YHB);
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_CALIBR_I);
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_CALIBR_IB);
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_CALIBR_II);
    QFontDatabase::addApplicationFont(szFontsPath+UIFONT_CALIBR_IZ);

    QFont f;
    f.setFamily("Ubuntu");
    f.setPointSize(15);
    a.setFont(f);

    MainWindow w;
    w.show();
    
    return a.exec();
}
