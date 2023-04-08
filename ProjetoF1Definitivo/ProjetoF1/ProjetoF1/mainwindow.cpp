#include "mainwindow.h"
#include "qtablewidget.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow),
      nomeDoArquivoNoDisco("")
{
    ui->setupUi(this);
    ui->lineEditNomeDoArquivo->setEnabled(false);
    ui->pushButtonMostrarResultado->setEnabled(false);
    ui->tableWidgetDados->setEditTriggers(QAbstractItemView::NoEditTriggers);
    ui->tableWidgetDados->verticalHeader()->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonBuscar_clicked()
{
    try {
        nomeDoArquivoNoDisco = QFileDialog::getOpenFileName(this,"Abrir Arquivo",QDir::currentPath(),"Arquivos Textos (*.csv *.txt)");
          if(nomeDoArquivoNoDisco.isEmpty()) throw QString("Arquivo nao foi selecionado");
          ui->lineEditNomeDoArquivo->setText(nomeDoArquivoNoDisco);
      } catch (QString &erro) {
          QMessageBox::information(this,"ERRO DE SISTEMA",erro);
      }
    ui->pushButtonMostrarResultado->setEnabled(true);
}

void MainWindow::on_pushButtonMostrarResultado_clicked()
{   
    try {
        imw::ManipularArquivo objetoMA(nomeDoArquivoNoDisco);
        objetoMA.buscarDadosNoArquivo();
        imw::Piloto p;
        std::vector<imw::Piloto> const &listaDePilotos =  objetoMA.getlistaDePilotos();

        //QString saida = "Quantidade de Elementos na Vector: "+QString::number(listaDePilotos.size());

       //QMessageBox::information(this,"ERRO DE SISTEMA",saida);
        // for para rodar a vector
            for(int j=0;j<(int)listaDePilotos.size();j++){
                QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(listaDePilotos[j].getCodigo()));
                ui->tableWidgetDados->setItem(j,0,item1);
                QTableWidgetItem *item2 = new QTableWidgetItem(listaDePilotos[j].getNome());
                ui->tableWidgetDados->setItem(j,1,item2);
                QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(listaDePilotos[j].getPontuacaoFinal()));
                ui->tableWidgetDados->setItem(j,2,item3);
                QTableWidgetItem *item4 = new QTableWidgetItem(QString::number(j+1));
                ui->tableWidgetDados->setItem(j,3,item4);
         }
        // incluir os elementos na frid
    } catch (QString &erro) {
        QMessageBox::information(this,"ERRO DE SISTEMA",erro);
    }
}

