#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "UIDefineAppConst.h"
#include <QSettings>
#include <QDebug>
#include <QFileInfo>
#include <QDir>
#include <QDebug>
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/select.h>
#include <sys/time.h>
#include <errno.h>
#include <stdio.h>
#include <unistd.h>
#include <QThread>
#include <QMessageBox>
#include <QFileDialog>


#define GPIO_BACKLIGHT_LCD_IOC_MAGIC  'J'
#define GPIO_BACKLIGHT_ON	_IOWR(GPIO_BACKLIGHT_LCD_IOC_MAGIC, 0x1, int)
#define GPIO_BACKLIGHT_OFF  _IOWR(GPIO_BACKLIGHT_LCD_IOC_MAGIC, 0x2, int)
#define GPIO_BACKLIGHT_PWM  _IOWR(GPIO_BACKLIGHT_LCD_IOC_MAGIC, 0x3, int)

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::FramelessWindowHint);
    InitUI();
}
/*
******************************************************************
** 函数名称：~MainWindow
** 功能概述: 初始化
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
MainWindow::~MainWindow()
{
    delete ui;
}

/*
******************************************************************
** 函数名称：InitUI
** 功能概述: 初始化
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::InitUI()
{
    //配置串口
    QSettings settings(UI_APPCONST_SERIALCONFIG_FILE_PATH, QSettings::IniFormat );
    //读取串口配置1
    settings.beginGroup(UI_APPCONST_SERIALCONFIG_Serial1);
    serialConfig0.s_SerialPortName=settings.value(UI_APPCONST_SERIALCONFIG_Serial_PortName,"/dev/ttyO1").toString();
    serialConfig0.s_SerialBaudrate= settings.value(UI_APPCONST_SERIALCONFIG_Serial_Baudrate,9600).toInt();
    serialConfig0.s_SerialStopBit= settings.value(UI_APPCONST_SERIALCONFIG_Serial_StopBit,1).toInt();
    serialConfig0.s_SerialParity=settings.value(UI_APPCONST_SERIALCONFIG_Serial_Parity,0).toInt();
    settings.endGroup();
    updateUIControl();

    totleRecLen = 0;
    totleSendLen = 0;
    timSend = new QTimer(this);
    connect(timSend,SIGNAL(timeout()),this,SLOT(timSendData()));
    ui->btnSend->setEnabled(false);
    ui->checkTim->setEnabled(false);
    ui->btnOpenPort->setStyleSheet("background-color: rgb(255, 0, 0);");
}
/*
******************************************************************
** 函数名称：getUIConfigs
** 功能概述: read ui config data
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::updateUIControl()
{
    int index = 0;
    //index = ui->comboPort->findText(serialConfig0.s_SerialPortName);
    //ui->comboPort->setCurrentIndex(index);
    QString str;
    int r,i;
    for(i = 1;i<6;i++)
    {
        r = QString::compare(tr("/dev/ttyO%1").arg(i),serialConfig0.s_SerialPortName);
        if(r == 0){
            str = "COM"+QString::number(i);
            break;
        }
    }
    index = ui->comboPort->findText(str);
    ui->comboPort->setCurrentIndex(index);
    index = ui->comBaudRate->findText(QString::number(serialConfig0.s_SerialBaudrate));
    ui->comBaudRate->setCurrentIndex(index);
}
/*
******************************************************************
** 函数名称：showEvent
** 功能概述: exec before the widget showed
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::showEvent(QShowEvent *event)
{
    QMainWindow::showEvent(event);

    //打开指令串口
    //if(!g_Serial0->Open())
    //{
    //   QMessageBox::about(this,tr("Open Serial Error"),g_Serial0->GetError());
    //}
}
/*
******************************************************************
** 函数名称：getUIConfigs
** 功能概述: read ui config data
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::getUIConfigs()
{
    serialConfig0.s_SerialPortName = getPortName(ui->comboPort->currentIndex());
    serialConfig0.s_SerialBaudrate = getBaudRate(ui->comBaudRate->currentIndex());
}
/*
******************************************************************
** 函数名称：getUIConfigs
** 功能概述: translate comboxPortName to device name
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
QString MainWindow::getPortName(int item)
{
    QString portName = "/dev/ttyO1";
    switch(item)
    {
    case 1:
        portName = "/dev/ttyO2";
        break;
    case 2:
        portName = "/dev/ttyO3";
        break;
    case 3:
        portName = "/dev/ttyO4";
        break;
    case 4:
        portName = "/dev/ttyO5";
        break;
    default:
        break;
    }
    return portName;
}
/*
******************************************************************
** 函数名称：getBaudRate
** 功能概述: translate comboxBaudRate to device BaudRate
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
int MainWindow::getBaudRate(int item)
{
    int baudRate = 9600;
    switch(item)
    {
    case 0:
        baudRate = 4800;
        break;
    case 2:
        baudRate = 19200;
        break;
    case 3:
        baudRate = 57600;
        break;
    case 4:
        baudRate = 115200;
        break;
    default:
        break;
    }
    return baudRate;
}
/*
******************************************************************
** 函数名称：sendMsgData
** 功能概述: sed message data
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::sendMsgData()
{
    QByteArray bytes;
    QString str;
    QStringList list;
    char data;
    bool ok;
    str = ui->editMsgData->text();
    list = str.split(" ");
    if(ui->checkHexSend->isChecked())//hex format send
    {
        for(int i = 0; i < list.count(); i++)
        {
           if(list.at(i) == " ")
               continue;
           if(list.at(i).isEmpty())
               continue;
           data = (char)list.at(i).toInt(&ok, 16);
           if(!ok){
               QMessageBox::information(this, tr("Warnning"), tr("Input data format err"), QMessageBox::Ok);
               return;
           }
           bytes.append(data);
       }
    }
    else
    {
        bytes = ui->editMsgData->text().toAscii();
    }
    g_Serial0->WriteData(bytes.data(),bytes.size());
    totleSendLen += bytes.size();
    ui->labSendLen->setText(QString::number(totleSendLen));
}
/*
******************************************************************
** 函数名称：ShowSeriaRecved
** 功能概述: 初始化
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::ShowSeriaRecved(QByteArray bytes)
{
    QString buf;
    if(!bytes.isEmpty())
    {
        if(!(ui->chkHexShow->isChecked()))
        {
            buf = bytes;
        }
        else
        {
            for(int i = 0; i < bytes.count(); i++){
                QString s;
                s.sprintf("0x%02x ", (unsigned char)bytes.at(i));
                buf += s;
            }
        }
        ui->textBrowser->setText(ui->textBrowser->document()->toPlainText() + buf);
        QTextCursor cursor = ui->textBrowser->textCursor();
        cursor.movePosition(QTextCursor::End);
        ui->textBrowser->setTextCursor(cursor);
        totleRecLen += bytes.size();
        ui->labRecLen->setText(QString::number((totleRecLen)));
    }
}
/*
******************************************************************
** 函数名称：on_btnOpenPort_clicked
** 功能概述: open serial ports slots
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
static bool openFlg = 0;
void MainWindow::on_btnOpenPort_clicked()
{
    if(!openFlg)
    {
        getUIConfigs();
        g_Serial0=new UISerial0(&serialConfig0,this);
        connect(g_Serial0,SIGNAL(SerialDataReady(QByteArray)),this,SLOT(ShowSeriaRecved(QByteArray)));
        //打开指令串口
        if(!g_Serial0->Open())
        {
           QMessageBox::about(this,tr("Open Serial Error"),g_Serial0->GetError());
           ui->comBaudRate->setEnabled(true);
           ui->comboPort->setEnabled(true);
           ui->btnSend->setEnabled(false);
           ui->checkTim->setEnabled(false);
           ui->btnOpenPort->setText(tr("OpenPort"));
           ui->btnOpenPort->setStyleSheet("background-color: rgb(255, 0, 0);");
           return;
        }
        ui->btnOpenPort->setText(tr("ClosePort"));
        ui->labStatus->setText(tr("%1,%2").arg(serialConfig0.s_SerialPortName).arg(serialConfig0.s_SerialBaudrate));
        openFlg =1;
        ui->comBaudRate->setEnabled(false);
        ui->comboPort->setEnabled(false);
        ui->btnSend->setEnabled(true);
        ui->checkTim->setEnabled(true);
        ui->btnOpenPort->setStyleSheet("background-color: rgb(0, 255, 0);");
        QSettings settings(UI_APPCONST_SERIALCONFIG_FILE_PATH, QSettings::IniFormat );
        //write串口配置1
        settings.beginGroup(UI_APPCONST_SERIALCONFIG_Serial1);
        settings.setValue(UI_APPCONST_SERIALCONFIG_Serial_PortName,serialConfig0.s_SerialPortName);
        settings.setValue(UI_APPCONST_SERIALCONFIG_Serial_Baudrate,QString::number(serialConfig0.s_SerialBaudrate));
        settings.endGroup();
    }
    else
    {
        if(g_Serial0)
        {
            g_Serial0->m_StopReadSerial = true;
            usleep(150000);
            delete g_Serial0;
            openFlg =0;
            ui->btnOpenPort->setText(tr("OpenPort"));
            ui->comBaudRate->setEnabled(true);
            ui->comboPort->setEnabled(true);
            ui->btnSend->setEnabled(false);
            ui->checkTim->setEnabled(false);
            ui->btnOpenPort->setStyleSheet("background-color: rgb(255, 0, 0);");
        }
    }
}
/*
******************************************************************
** 函数名称：on_btnClearShow_clicked
** 功能概述: clear show area
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::on_btnClearShow_clicked()
{
    ui->textBrowser->clear();
}
/*
******************************************************************
** 函数名称：on_btnSend_clicked
** 功能概述: on send slots
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::on_btnSend_clicked()
{
    if(ui->editMsgData->text().isEmpty())
    {
        QMessageBox::information(this, tr("Warnning"), tr("No data to translate"), QMessageBox::Ok);
        return;
    }
    sendMsgData();
}
/*
******************************************************************
** 函数名称：on_btnClearLen_clicked
** 功能概述: clear rxlen txlen
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::on_btnClearLen_clicked()
{
    totleRecLen = 0;
    totleSendLen = 0;
    ui->labSendLen->setText(QString::number(totleSendLen));
    ui->labRecLen->setText(QString::number(totleRecLen));
}
/*
******************************************************************
** 函数名称：timSendData
** 功能概述: timer send data
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::timSendData()
{
    if(ui->checkTim->isChecked())
    {
        sendMsgData();
    }
}
/*
******************************************************************
** 函数名称：on_checkTim_toggled
** 功能概述: on_checkTim_toggled
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::on_checkTim_toggled(bool checked)
{
    if(checked)
    {
        if(ui->editMsgData->text().isEmpty())
        {
            QMessageBox::information(this, tr("Warnning"), tr("No data to translate"), QMessageBox::Ok);
            ui->checkTim->setChecked(false);
            return;
        }
        if(timSend->isActive())
        {
            timSend->stop();
        }
        QString str;
        bool ok;
        str = ui->editTimInterval->text();
        int interval = str.toInt(&ok,10);
        if(!ok){
            QMessageBox::information(this, tr("Warnning"), tr("Timer interval value invalid format"), QMessageBox::Ok);
            ui->editTimInterval->setText(tr(""));
            ui->checkTim->setChecked(false);
            return;
        }
        ui->editTimInterval->setEnabled(false);
        timSend->setInterval(interval);
        timSend->start();
    }
    else
    {
        ui->editTimInterval->setEnabled(true);
    }
}
/*
******************************************************************
** 函数名称：on_btnOpenFile_clicked
** 功能概述: on_btnOpenFile_clicked
** 参数说明
** 作成日期：20170510
** 作成者：  zhujf
** 修改日期：
** 修改者：
******************************************************************
*/
void MainWindow::on_btnOpenFile_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this, tr("Load File"), ".", tr("open file (*.txt *.log)"));  //添加更多的文件类型
    QFile file(filename);

    //如果取消打开则退出函数
    if(file.fileName().isEmpty()){
        return;
    }

    //如果打开失败则提示并退出函数
    if(!file.open(QFile::ReadOnly | QIODevice::Text)){
        QMessageBox::warning(this, tr("Open failed"),
                             tr("Load file erro,pease check"),
                             QMessageBox::Ok);
        return;
    }
    ui->editFileName->setText(filename);
    QByteArray line;
    while(!file.atEnd()){
      line = file.readLine();
      ui->editMsgData->setText(ui->editMsgData->text() + tr(line));
    }
}
