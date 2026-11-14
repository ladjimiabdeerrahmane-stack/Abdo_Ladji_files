/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_User;
    QLineEdit *lineEdit_Pass;
    QPushButton *pushButton_Login;
    QPushButton *pushButton_Cancel;
    QFrame *frame;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(723, 519);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 30, 181, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adwaita Sans")});
        font.setPointSize(18);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color : rgb(0, 0, 0)"));
        label->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 80, 181, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        lineEdit_User = new QLineEdit(centralwidget);
        lineEdit_User->setObjectName("lineEdit_User");
        lineEdit_User->setGeometry(QRect(300, 30, 300, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Adwaita Mono")});
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setItalic(true);
        lineEdit_User->setFont(font1);
        lineEdit_User->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"border-radius : 6px ;"));
        lineEdit_Pass = new QLineEdit(centralwidget);
        lineEdit_Pass->setObjectName("lineEdit_Pass");
        lineEdit_Pass->setGeometry(QRect(300, 80, 300, 41));
        lineEdit_Pass->setFont(font1);
        lineEdit_Pass->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"border-radius : 6px ;"));
        lineEdit_Pass->setEchoMode(QLineEdit::EchoMode::Password);
        pushButton_Login = new QPushButton(centralwidget);
        pushButton_Login->setObjectName("pushButton_Login");
        pushButton_Login->setGeometry(QRect(250, 175, 150, 35));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Sans")});
        font2.setPointSize(20);
        font2.setBold(true);
        pushButton_Login->setFont(font2);
        pushButton_Login->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"border-radius : 6px ;"));
        pushButton_Cancel = new QPushButton(centralwidget);
        pushButton_Cancel->setObjectName("pushButton_Cancel");
        pushButton_Cancel->setGeometry(QRect(425, 175, 150, 35));
        pushButton_Cancel->setFont(font2);
        pushButton_Cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(36, 31, 49);\n"
"border-radius : 6px ;"));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 10, 625, 400));
        frame->setStyleSheet(QString::fromUtf8("color: rgb(154, 153, 150);\n"
"border-radius : 8px ;\n"
"background-color: rgb(222, 221, 218);"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(160, 240, 300, 100));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Sans")});
        font3.setBold(true);
        textEdit->setFont(font3);
        textEdit->setStyleSheet(QString::fromUtf8("border_radius : 4px;\n"
"border-color: rgb(154, 153, 150);\n"
"background-color: rgb(119, 118, 123);"));
        textEdit->setFrameShape(QFrame::Shape::Box);
        MainWindow->setCentralWidget(centralwidget);
        frame->raise();
        label->raise();
        label_2->raise();
        lineEdit_User->raise();
        lineEdit_Pass->raise();
        pushButton_Login->raise();
        pushButton_Cancel->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 723, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "User Name :", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        lineEdit_User->setInputMask(QString());
        lineEdit_User->setText(QString());
        lineEdit_User->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter a username", nullptr));
        lineEdit_Pass->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter a password", nullptr));
        pushButton_Login->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_Cancel->setText(QCoreApplication::translate("MainWindow", "Cancel", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Sans'; font-size:10pt; font-weight:700; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'monospace'; font-size:16pt; font-weight:400;\">log in to your account</span></p></body></html>", nullptr));
        textEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "Please Enter the username and password to log in", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
