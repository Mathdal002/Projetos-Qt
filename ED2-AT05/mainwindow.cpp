#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QFileDialog>
#include<fstream>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QString>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Conecte os sinais para a ordenação
    connect(ui->pushButtonBuscar, &QPushButton::clicked, this, &MainWindow::on_pushButtonBuscar_clicked);
    connect(ui->comboBoxOrdenacao, QOverload<int>::of(&QComboBox::currentIndexChanged), this, &MainWindow::on_comboBoxOrdenacao_currentIndexChanged);

    // Inicialmente, ordene os dados com base no índice selecionado no combo box
    on_comboBoxOrdenacao_currentIndexChanged(ui->comboBoxOrdenacao->currentIndex());
}

MainWindow::~MainWindow()
{
    delete ui;
}
//std::vector<Dado> dados;

void MainWindow::on_comboBoxOrdenacao_currentIndexChanged(int index)
{
    try {
        QString nomeDoArquivo = "C:/Users/teus4/Downloads/Aula5/DocentesEscolaBD_TESTE_V1.csv";
        lista.carregarDadosDoArquivo(nomeDoArquivo, professores);
        ordena.selectionSort(index, professores);
        exibirDadosNaTabela(professores);
    } catch (...) {
        QMessageBox::critical(this, "Erro", "Ocorreu um erro ao carregar os dados do arquivo.");
    }
}

void MainWindow::on_pushButtonBuscar_clicked()
{
    try {
        busca1.busca(ui, professores);
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO:", erro);
    }
}
void MainWindow::exibirDadosNaTabela(const std::vector<Professor>& professores) {
    try {
    // Limpar a tabela, se houver dados anteriores
    ui->tableWidgetDados->clearContents();

    // Definir o número de linhas na tabela com base no tamanho dos professores
    ui->tableWidgetDados->setRowCount(professores.size());
    ui->tableWidgetDados->setColumnWidth(0, 80); // Coluna 0
    ui->tableWidgetDados->setColumnWidth(1, 278); // Coluna 1
    ui->tableWidgetDados->setColumnWidth(2, 100); // Coluna 2
    ui->tableWidgetDados->setColumnWidth(3, 100); // Coluna 3
    ui->tableWidgetDados->setColumnWidth(4, 120);  // Coluna 4
    // Iterar pelos professores e configurar os itens nas células da tabela
    for (int i = 0; i < professores.size(); ++i) {
        const Professor& professor = professores[i];
        QTableWidgetItem *matricula = new QTableWidgetItem(professor.getMatricula());
        QTableWidgetItem *itemColuna2 = new QTableWidgetItem(professor.getNome());
        QTableWidgetItem *itemColuna3 = new QTableWidgetItem(professor.getDepartamento());
        QTableWidgetItem *itemColuna4 = new QTableWidgetItem(professor.getTitulacao());
        QTableWidgetItem *itemColuna5 = new QTableWidgetItem(professor.getTipoContato());

        // Defina os itens nas células da tabela
        ui->tableWidgetDados->setItem(i, 0, matricula);
        ui->tableWidgetDados->setItem(i, 1, itemColuna2);
        ui->tableWidgetDados->setItem(i, 2, itemColuna3);
        ui->tableWidgetDados->setItem(i, 3, itemColuna4);
        ui->tableWidgetDados->setItem(i, 4, itemColuna5);
        // Defina mais itens conforme necessário para suas colunas
    }

    // Atualize a tabela para exibir os dados
    //ui->tableWidgetDados->update();
    } catch (QString &erro) {
        QMessageBox::information(this, "ERRO:","TABELA NÃO FOI CARREGADA");
    }
}







