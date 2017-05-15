#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "./Serial/uiserial0.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    void InitUI(void);
    void updateUIControl(void);
    void showEvent(QShowEvent *event);
    void getUIConfigs(void);
    QString getPortName(int item);
    int getBaudRate(int item);
    void sendMsgData(void);
    int totleRecLen;
    int totleSendLen;
    QTimer *timSend;

private:
    Ui::MainWindow *ui;
    UIAppType::type_SerialConfig serialConfig0;
private:
    Posix_QextSerialPort* m_serial1;
    QTimer *readTimer;
public slots:
    void ShowSeriaRecved(QByteArray bytes);
private slots:
    void on_btnOpenPort_clicked();
    void on_btnClearShow_clicked();
    void on_btnSend_clicked();
    void on_btnClearLen_clicked();
    void timSendData(void);
    void on_checkTim_toggled(bool checked);
    void on_btnOpenFile_clicked();
};

extern UISerial0* g_Serial0;
extern MainWindow* g_MainWindow;

#endif // MAINWINDOW_H
