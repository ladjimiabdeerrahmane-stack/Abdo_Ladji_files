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
#include <QtWidgets/QGroupBox>
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
    QGroupBox *groupBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QTextEdit *textEdithistorique;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(50, 20, 161, 201));
        QFont font;
        font.setFamilies({QString::fromUtf8("Adwaita Sans")});
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QString::fromUtf8("border-radius : 4px;\n"
"background-color: rgb(194, 194, 195);\n"
"border : 1px solid white ;\n"
"color : black ;"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 40, 100, 25));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("DejaVu Serif")});
        font1.setPointSize(10);
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 194, 195);\n"
"color : black ;\n"
"border-radius : 6px ;\n"
"border : 2px solid black ;"));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(30, 80, 100, 25));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 194, 195);\n"
"border-radius : 6px ;\n"
"color : black ;\n"
"border : 2px solid black ;"));
        pushButton_3 = new QPushButton(groupBox);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(30, 120, 100, 25));
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 194, 195);\n"
"border-radius : 6px ;\n"
"color : black ;\n"
"border : 2px solid black ;"));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(30, 160, 100, 25));
        pushButton_4->setStyleSheet(QString::fromUtf8("background-color: rgb(194, 194, 195);\n"
"border-radius : 6px ;\n"
"color : black ;\n"
"border : 2px solid black ;"));
        textEdithistorique = new QTextEdit(centralwidget);
        textEdithistorique->setObjectName("textEdithistorique");
        textEdithistorique->setGeometry(QRect(50, 250, 250, 131));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("DejaVu Serif")});
        font2.setPointSize(12);
        textEdithistorique->setFont(font2);
        textEdithistorique->setStyleSheet(QString::fromUtf8("border-radius : 4px;\n"
"background-color: rgb(194, 194, 195);\n"
"border : 1px solid white ;\n"
"color : black ;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 20));
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
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Boite de Dialogue", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Confirmation", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Information", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Avertissement", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "Erreur", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
