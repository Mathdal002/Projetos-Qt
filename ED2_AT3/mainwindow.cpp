#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QLineEdit>

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


void MainWindow::on_pushButtonGerar2_clicked()
{
    try {
        bool ok;
        int elemento = ui->lineEditElemento2->text().toInt(&ok);
        if (!ok || elemento <=0) {
                   QMessageBox::information(this, "Erro", "Digite um valor numérico válido.");
                   return;
               }
        int* conjuntoAleatorio = listar.Conjuntox(elemento); // Chama a função

        // Chama o método formatar da classe Conjunto
        QString conjuntoFormatado = listar.formatar(conjuntoAleatorio);

        listar.selectionSort();
        QString conjuntoOrdenado = listar.formatar(conjuntoAleatorio);


        // Exibe o conjunto formatado no lineEditfinal
        ui->lineEditFinal2->setText(conjuntoFormatado);
        ui->lineEditOrdenada->setText(conjuntoOrdenado);

        // Não se esqueça de liberar a memória alocada para o conjuntoAleatorio
        //delete[] conjuntoAleatorio;
        ui->lineEditValor->clear();
        ui->lineEditBuscar->clear();
    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}


void MainWindow::on_pushButtonBuscar_clicked()
{
     try {
    bool ok;
    int valor = ui->lineEditValor->text().toInt(&ok);
    if (!ok) {
               QMessageBox::information(this, "Erro", "Digite um valor numérico válido.");
               return;
           }

    QString resultado = listar.BuscaPlus(valor);
            ui->lineEditBuscar->setText(resultado);
    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}

