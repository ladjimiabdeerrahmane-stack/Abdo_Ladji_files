#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_Pass->setEchoMode(QLineEdit::Password);
    QAction *eye = ui->lineEdit_Pass->addAction(QIcon("/home/archlinux/Desktop/HCI_TP/TP_2/eye.png"), QLineEdit::TrailingPosition);
    connect(eye, &QAction::triggered , this , [=](){

        if(ui->lineEdit_Pass->echoMode() == QLineEdit::Password){
            ui->lineEdit_Pass->setEchoMode(QLineEdit::Normal);
        }
        else{
            ui->lineEdit_Pass->setEchoMode(QLineEdit::Password);
        }
    });
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Cancel_clicked()
{
    close();
}
void MainWindow::on_pushButton_Login_clicked()
{
    QString Username=ui->lineEdit_User->text();
    QString Password=ui->lineEdit_Pass->text();

    if (Username=="Anis" && Password=="delugee")
    {
        ui->textEdit->setTextColor("green");
        ui->textEdit->setText("Login success");

    }
    else
    {
        ui->textEdit->setTextColor("red");
        ui->textEdit->setText("Enter validate UserName or Password");
    }
}


void MainWindow::on_Show_clicked()
{

}
