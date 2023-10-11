 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"
#include <QLineEdit>
#include <QElapsedTimer>

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

        QElapsedTimer timer;

               timer.start();
               listar.selectionSort(); // Inicia a contagem do tempo
               int selectionSortTime = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao1->setText(QString::number(selectionSortTime) + " ns");

               timer.restart(); // Reinicia o cronômetro
               listar.insertSort(); // Inicia a contagem do tempo para a próxima função
               int insertSortTime = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao2->setText(QString::number(insertSortTime) + " ns");

               timer.restart(); // Reinicia o cronômetro
               listar.bubbleSort(); // Inicia a contagem do tempo para a próxima função
               int insertSortTime2 = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao3->setText(QString::number(insertSortTime2) + " ns");


               timer.restart(); // Reinicia o cronômetro
               listar.mergeSortHelp(); // Inicia a contagem do tempo para a próxima função
               int MergeSortTime = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao4->setText(QString::number(MergeSortTime) + " ns");

               timer.restart(); // Reinicia o cronômetro
               listar.heapSort(); // Inicia a contagem do tempo para a próxima função
               int HeapSortTime = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao5->setText(QString::number(HeapSortTime) + " ns");

               timer.restart(); // Reinicia o cronômetro
               listar.quickSortHelp(); // Inicia a contagem do tempo para a próxima função
               int QuickSortTime = timer.nsecsElapsed(); // Obtém o tempo decorrido em nanossegundos
               ui->lineEditTempoExecucao6->setText(QString::number(QuickSortTime) + " ns");

        // Após a ordenação, você precisa reformatar o vetor ordenado
        QString conjuntoOrdenado = listar.formatar(listar.getConjuntoSS()); // Use a função apropriada para obter o vetor ordenado
        QString conjuntoOrdenadoIS = listar.formatar(listar.getConjuntoIS());
         QString conjuntoOrdenadoBS = listar.formatar(listar.getConjuntoBS());
         QString conjuntoOrdenadoMS = listar.formatar(listar.getConjuntoMS());
         QString conjuntoOrdenadoHS = listar.formatar(listar.getConjuntoHS());
         QString conjuntoOrdenadoQS = listar.formatar(listar.getConjuntoQS());
        // Exibe o conjunto formatado no lineEditfinal
        ui->lineEditFinal2->setText(conjuntoFormatado);

        ui->lineEditOrdenada->setText(conjuntoOrdenado);
        ui->lineEditExecucao1->setText(QString::number(listar.getExecucao()));

        ui->lineEditOrdenada_2->setText(conjuntoOrdenadoIS);
        ui->lineEditExecucao2->setText(QString::number(listar.getExecucao2()));

        ui->lineEditOrdenada_3->setText(conjuntoOrdenadoBS);
        ui->lineEditExecucao3->setText(QString::number(listar.getExecucao3()));

         ui->lineEditOrdenada_4->setText(conjuntoOrdenadoMS);

         ui->lineEditOrdenada_5->setText(conjuntoOrdenadoHS);

         ui->lineEditOrdenada_7->setText(conjuntoOrdenadoQS);

        // Não se esqueça de liberar a memória alocada para o conjuntoAleatorio
        //delete[] conjuntoAleatorio;
    } catch (QString erro) {
        QMessageBox::information(this, "ERRO", erro);
    }
}




