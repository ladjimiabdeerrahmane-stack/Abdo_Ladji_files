#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int rep = QMessageBox::question(this, "Confirmation", "Voulez-vous supprimer ce fichier ?", QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    ui->textEdithistorique->append( rep == QMessageBox::Yes ? "vous avezchoisi supprimer le fichier":rep == QMessageBox::No ?"vous avez choisi de laisser le fichier":"vous avez choisi Aannuler");

}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::information(this, "Information", "QTcreator a été correctement désinstaller de cet ordinateur");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::warning(this, " Avertissement ", "Cette action ne peut pas être réalisée car le fichier est ou vert dans AdobeAcrobat 9.0");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::critical(this, " Erreur ", "une erreur critique !");
}

