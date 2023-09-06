#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "arquivo.h"
#include "buscar.h"
#include "ordenacao.h"
#include "professor.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonBuscar_clicked();
    void exibirDadosNaTabela(const std::vector<Professor> &professores);
     void on_comboBoxOrdenacao_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
     Arquivo lista;
     Ordenacao ordena;
     std::vector<Professor> professores;
     Buscar busca1;
     QString errorMessage;
};
#endif // MAINWINDOW_H
