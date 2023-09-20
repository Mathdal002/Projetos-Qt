#include "problema1.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
namespace mathd{
    Problema1::Problema1():
    QElemento(0),
    conjunto(nullptr)
{
}

int* Problema1::Conjuntox(int tamanho) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    conjunto = new int[tamanho];

    for (int i = 0; i < tamanho; ++i) {
        conjunto[i] = std::rand() % 1001;
    }

    QElemento = tamanho;

    return conjunto;
}

QString Problema1::formatar(int* conjunto, int tamanho) {
    QString resultado;

    for (int i = 0; i < tamanho; ++i) {
        resultado += QString::number(conjunto[i]);
        if (i < tamanho - 1) {
            resultado += " | ";
        }
    }

    return resultado;
}
}
