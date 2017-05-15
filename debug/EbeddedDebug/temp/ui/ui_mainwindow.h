/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Mon May 15 11:18:37 2017
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *titleWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *titleLable;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frameComSet;
    QLabel *labPort;
    QComboBox *comboPort;
    QLabel *label;
    QComboBox *comBaudRate;
    QPushButton *btnOpenPort;
    QCheckBox *checkTim;
    QCheckBox *checkHexSend;
    QCheckBox *chkHexShow;
    QLineEdit *editMsgData;
    QPushButton *btnSend;
    QPushButton *btnClearShow;
    QLineEdit *editTimInterval;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *labStatus;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *btnClearLen;
    QLabel *labSendLen;
    QLabel *labRecLen;
    QPushButton *btnOpenFile;
    QLineEdit *editFileName;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label_9;
    QTextBrowser *textBrowser;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        QFont font;
        font.setPointSize(13);
        font.setBold(false);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        titleWidget = new QWidget(centralWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(0, 0, 825, 31));
        titleWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(titleWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(248, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        titleLable = new QLabel(titleWidget);
        titleLable->setObjectName(QString::fromUtf8("titleLable"));
        titleLable->setMinimumSize(QSize(0, 0));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Calibri"));
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        titleLable->setFont(font1);
        titleLable->setLayoutDirection(Qt::LeftToRight);
        titleLable->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));
        titleLable->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(titleLable);

        horizontalSpacer_2 = new QSpacerItem(247, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        frameComSet = new QFrame(centralWidget);
        frameComSet->setObjectName(QString::fromUtf8("frameComSet"));
        frameComSet->setGeometry(QRect(0, 260, 598, 221));
        frameComSet->setMinimumSize(QSize(598, 0));
        frameComSet->setMaximumSize(QSize(221, 16777215));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Calibri"));
        font2.setPointSize(15);
        font2.setBold(false);
        font2.setWeight(50);
        frameComSet->setFont(font2);
        frameComSet->setFrameShape(QFrame::StyledPanel);
        frameComSet->setFrameShadow(QFrame::Raised);
        labPort = new QLabel(frameComSet);
        labPort->setObjectName(QString::fromUtf8("labPort"));
        labPort->setGeometry(QRect(10, 14, 43, 22));
        QFont font3;
        font3.setPointSize(15);
        labPort->setFont(font3);
        comboPort = new QComboBox(frameComSet);
        comboPort->setObjectName(QString::fromUtf8("comboPort"));
        comboPort->setGeometry(QRect(100, 10, 100, 30));
        comboPort->setFont(font3);
        comboPort->setFocusPolicy(Qt::NoFocus);
        label = new QLabel(frameComSet);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 56, 86, 20));
        QFont font4;
        font4.setPointSize(15);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setUnderline(false);
        font4.setWeight(50);
        font4.setStrikeOut(false);
        font4.setKerning(true);
        font4.setStyleStrategy(QFont::PreferAntialias);
        label->setFont(font4);
        comBaudRate = new QComboBox(frameComSet);
        comBaudRate->setObjectName(QString::fromUtf8("comBaudRate"));
        comBaudRate->setGeometry(QRect(100, 50, 100, 30));
        comBaudRate->setFont(font3);
        comBaudRate->setFocusPolicy(Qt::NoFocus);
        btnOpenPort = new QPushButton(frameComSet);
        btnOpenPort->setObjectName(QString::fromUtf8("btnOpenPort"));
        btnOpenPort->setGeometry(QRect(220, 10, 100, 68));
        btnOpenPort->setFocusPolicy(Qt::NoFocus);
        checkTim = new QCheckBox(frameComSet);
        checkTim->setObjectName(QString::fromUtf8("checkTim"));
        checkTim->setGeometry(QRect(10, 100, 81, 22));
        checkTim->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked\n"
"{	\n"
"	image: url(:/res/images/checkbox_parcial.png);\n"
"}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"	image: url(:/res/images/checkbox_checked.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_parcial_disable.png);\n"
"}\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_checked_disable.png);\n"
"}"));
        checkHexSend = new QCheckBox(frameComSet);
        checkHexSend->setObjectName(QString::fromUtf8("checkHexSend"));
        checkHexSend->setGeometry(QRect(10, 134, 111, 22));
        checkHexSend->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked\n"
"{	\n"
"	image: url(:/res/images/checkbox_parcial.png);\n"
"}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"	image: url(:/res/images/checkbox_checked.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_parcial_disable.png);\n"
"}\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_checked_disable.png);\n"
"}\n"
""));
        chkHexShow = new QCheckBox(frameComSet);
        chkHexShow->setObjectName(QString::fromUtf8("chkHexShow"));
        chkHexShow->setGeometry(QRect(340, 10, 110, 27));
        chkHexShow->setFocusPolicy(Qt::NoFocus);
        chkHexShow->setStyleSheet(QString::fromUtf8("QCheckBox::indicator:unchecked\n"
"{	\n"
"	image: url(:/res/images/checkbox_parcial.png);\n"
"}\n"
"QCheckBox::indicator:checked\n"
"{\n"
"	image: url(:/res/images/checkbox_checked.png);\n"
"}\n"
"QCheckBox::indicator:unchecked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_parcial_disable.png);\n"
"}\n"
"QCheckBox::indicator:checked:disabled\n"
"{\n"
"	image: url(:/res/images/checkbox_checked_disable.png);\n"
"}"));
        editMsgData = new QLineEdit(frameComSet);
        editMsgData->setObjectName(QString::fromUtf8("editMsgData"));
        editMsgData->setGeometry(QRect(10, 160, 491, 27));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(15);
        editMsgData->setFont(font5);
        btnSend = new QPushButton(frameComSet);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setGeometry(QRect(510, 137, 81, 51));
        btnSend->setFocusPolicy(Qt::NoFocus);
        btnClearShow = new QPushButton(frameComSet);
        btnClearShow->setObjectName(QString::fromUtf8("btnClearShow"));
        btnClearShow->setGeometry(QRect(480, 10, 100, 27));
        btnClearShow->setFocusPolicy(Qt::NoFocus);
        editTimInterval = new QLineEdit(frameComSet);
        editTimInterval->setObjectName(QString::fromUtf8("editTimInterval"));
        editTimInterval->setGeometry(QRect(100, 100, 71, 27));
        label_2 = new QLabel(frameComSet);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 105, 31, 17));
        label_3 = new QLabel(frameComSet);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 192, 57, 20));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        QFont font6;
        font6.setFamily(QString::fromUtf8("Calibri"));
        label_3->setFont(font6);
        labStatus = new QLabel(frameComSet);
        labStatus->setObjectName(QString::fromUtf8("labStatus"));
        labStatus->setGeometry(QRect(86, 190, 121, 25));
        sizePolicy.setHeightForWidth(labStatus->sizePolicy().hasHeightForWidth());
        labStatus->setSizePolicy(sizePolicy);
        QFont font7;
        font7.setFamily(QString::fromUtf8("Ubuntu"));
        font7.setPointSize(13);
        labStatus->setFont(font7);
        labStatus->setStyleSheet(QString::fromUtf8("border:1px solid #575757;"));
        labStatus->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        label_5 = new QLabel(frameComSet);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 192, 16, 20));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_6 = new QLabel(frameComSet);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(330, 192, 16, 20));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        btnClearLen = new QPushButton(frameComSet);
        btnClearLen->setObjectName(QString::fromUtf8("btnClearLen"));
        btnClearLen->setGeometry(QRect(450, 190, 85, 26));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnClearLen->sizePolicy().hasHeightForWidth());
        btnClearLen->setSizePolicy(sizePolicy1);
        labSendLen = new QLabel(frameComSet);
        labSendLen->setObjectName(QString::fromUtf8("labSendLen"));
        labSendLen->setGeometry(QRect(231, 190, 91, 25));
        sizePolicy.setHeightForWidth(labSendLen->sizePolicy().hasHeightForWidth());
        labSendLen->setSizePolicy(sizePolicy);
        labSendLen->setFont(font5);
        labSendLen->setStyleSheet(QString::fromUtf8("border:1px solid #575757;"));
        labSendLen->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        labRecLen = new QLabel(frameComSet);
        labRecLen->setObjectName(QString::fromUtf8("labRecLen"));
        labRecLen->setGeometry(QRect(355, 190, 91, 25));
        sizePolicy.setHeightForWidth(labRecLen->sizePolicy().hasHeightForWidth());
        labRecLen->setSizePolicy(sizePolicy);
        labRecLen->setFont(font5);
        labRecLen->setStyleSheet(QString::fromUtf8("border:1px solid #575757;"));
        labRecLen->setAlignment(Qt::AlignBottom|Qt::AlignJustify);
        btnOpenFile = new QPushButton(frameComSet);
        btnOpenFile->setObjectName(QString::fromUtf8("btnOpenFile"));
        btnOpenFile->setGeometry(QRect(220, 100, 100, 27));
        editFileName = new QLineEdit(frameComSet);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));
        editFileName->setEnabled(true);
        editFileName->setGeometry(QRect(330, 100, 251, 27));
        pushButton_6 = new QPushButton(frameComSet);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(340, 50, 100, 27));
        pushButton_7 = new QPushButton(frameComSet);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(480, 50, 100, 27));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(599, 70, 201, 441));
        label_9->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/volinci.png);"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(0, 31, 598, 229));
        QFont font8;
        font8.setPointSize(14);
        font8.setBold(false);
        font8.setWeight(50);
        textBrowser->setFont(font8);
        textBrowser->setFocusPolicy(Qt::NoFocus);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        titleLable->setText(QApplication::translate("MainWindow", "Volnic Serial-Com Assistant For Linux", 0, QApplication::UnicodeUTF8));
        labPort->setText(QApplication::translate("MainWindow", "Port:", 0, QApplication::UnicodeUTF8));
        comboPort->clear();
        comboPort->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "COM1", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "COM2", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "COM3", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "COM4", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "COM5", 0, QApplication::UnicodeUTF8)
        );
        label->setText(QApplication::translate("MainWindow", "BaudRate:", 0, QApplication::UnicodeUTF8));
        comBaudRate->clear();
        comBaudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "4800", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "9600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "19200", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "57600", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "115200", 0, QApplication::UnicodeUTF8)
        );
        btnOpenPort->setText(QApplication::translate("MainWindow", "OpenPort", 0, QApplication::UnicodeUTF8));
        checkTim->setText(QApplication::translate("MainWindow", "Timer:", 0, QApplication::UnicodeUTF8));
        checkHexSend->setText(QApplication::translate("MainWindow", "HEX Send", 0, QApplication::UnicodeUTF8));
        chkHexShow->setText(QApplication::translate("MainWindow", "HexShow", 0, QApplication::UnicodeUTF8));
        btnSend->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        btnClearShow->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "ms", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "Status:", 0, QApplication::UnicodeUTF8));
        labStatus->setText(QString());
        label_5->setText(QApplication::translate("MainWindow", "S:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindow", "R:", 0, QApplication::UnicodeUTF8));
        btnClearLen->setText(QApplication::translate("MainWindow", "Clear", 0, QApplication::UnicodeUTF8));
        labSendLen->setText(QString());
        labRecLen->setText(QString());
        btnOpenFile->setText(QApplication::translate("MainWindow", "OpenFile", 0, QApplication::UnicodeUTF8));
        editFileName->setText(QApplication::translate("MainWindow", "File Name", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "SendFile", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "StopSend", 0, QApplication::UnicodeUTF8));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
