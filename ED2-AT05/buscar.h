#ifndef BUSCAR_H
#define BUSCAR_H
#include "QString"
#include "arquivo.h"
#include "ui_mainwindow.h"

class Buscar
{

public:
    Buscar();
    void busca(Ui::MainWindow *ui, const std::vector<Professor> &professores); // Altere o tipo do vetor para Professor
};

#endif // BUSCAR_H
