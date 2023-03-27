#include "mainwindow.h"
#include "ui_mainwindow.h"
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
    //QMessageBox::about(this,"Teste Caixas","Curso de QT");
    //QMessageBox::aboutQt(this,"Teste Caixas");
    //QMessageBox::critical(this,"Teste Caixas","Exemplo de Erro");
    //QMessageBox::information(this,"Teste de Caixas", "Caixa de informação");
    //QMessageBox::question(this,"Teste de Caixas","Voce está gostando do curso");
    QMessageBox::warning(this,"Teste de Caixas","Alerta Simples");

}

