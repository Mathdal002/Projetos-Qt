#ifndef ORDENACAO_H
#define ORDENACAO_H

#include "QString"
#include "arquivo.h"
#include "ui_mainwindow.h"
#include <vector> // Inclua a biblioteca vector para usar std::vector

class Ordenacao
{
public:
    Ordenacao();

    // Modifique a função de ordenação para ordenar um std::vector
    void selectionSort(int comboIndex, std::vector<Professor> &professores);
    };

#endif // ORDENACAO_H
