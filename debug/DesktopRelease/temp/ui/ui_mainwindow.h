/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat May 13 10:30:52 2017
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
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
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QTextBrowser *textBrowser;
    QLineEdit *edtSedData;
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 480);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        titleWidget = new QWidget(centralWidget);
        titleWidget->setObjectName(QString::fromUtf8("titleWidget"));
        titleWidget->setGeometry(QRect(0, 0, 825, 47));
        titleWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        verticalLayout = new QVBoxLayout(titleWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
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
        font1.setPointSize(20);
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

        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(20, 120, 113, 27));
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setWeight(50);
        lineEdit->setFont(font2);
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 160, 113, 27));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Calibri"));
        font3.setPointSize(18);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        lineEdit_2->setFont(font3);
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 200, 113, 27));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Calibri"));
        font4.setPointSize(18);
        font4.setBold(false);
        font4.setWeight(50);
        lineEdit_3->setFont(font4);
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(20, 250, 113, 27));
        lineEdit_4->setFont(font4);
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setGeometry(QRect(200, 100, 261, 191));
        textBrowser->setFont(font4);
        edtSedData = new QLineEdit(centralWidget);
        edtSedData->setObjectName(QString::fromUtf8("edtSedData"));
        edtSedData->setGeometry(QRect(200, 320, 271, 41));
        edtSedData->setFont(font4);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(280, 400, 98, 27));
        pushButton->setFont(font4);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(600, 50, 201, 431));
        label->setStyleSheet(QString::fromUtf8("background-image: url(:/res/images/volinci.png);"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(30, 340, 141, 27));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Calibri"));
        font5.setPointSize(15);
        font5.setBold(false);
        font5.setWeight(50);
        pushButton_2->setFont(font5);
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 370, 141, 27));
        pushButton_3->setFont(font5);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        titleLable->setText(QApplication::translate("MainWindow", "Volnic Serial-Com Assistant For Linux", 0, QApplication::UnicodeUTF8));
        lineEdit_2->setText(QApplication::translate("MainWindow", "what", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "Send", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "CloseBuzzer", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "OpenBuzzer", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
