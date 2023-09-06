#ifndef ARQUIVO_H
#define ARQUIVO_H

#include "QString"
#include "ui_mainwindow.h"
#include <QTableWidget>
#include <vector>
#include "professor.h" // Inclua o cabeçalho da classe Professor

class Arquivo {
private:
    Ui::MainWindow *ui;

public:
    Arquivo();
    // Função para carregar dados do arquivo em um vetor
    void carregarDadosDoArquivo(const QString &nomeDoArquivo, std::vector<Professor> &professores); // Altere o tipo do vetor para Professor

};

#endif // ARQUIVO_H
