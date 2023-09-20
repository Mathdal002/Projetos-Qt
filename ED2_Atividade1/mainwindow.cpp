#include "mainwindow.h"
#include "ui_mainwindow.h"

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
    try {
    bool ok;
    int valor = ui->lineEdit->text().toInt(&ok);
    if (!ok) {
            QMessageBox::information(this, "Erro", "Digite um valor numérico válido.");
            return;
    }
    int *conjunto = listar.Conjuntox(valor);
    ui->lineEdit_2->setText(listar.formatar(conjunto, valor));
    }
    catch(...){
    }

}

