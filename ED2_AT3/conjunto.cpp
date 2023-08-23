#include "conjunto.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Conjunto::Conjunto() :
Qelemento(0), conjunto(nullptr),conjuntoSS(nullptr)
{
}

int* Conjunto::Conjuntox(int tamanho) {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    conjunto = new int[tamanho]; // Store the array in the class member

    for (int i = 0; i < tamanho; ++i) {
        conjunto[i] = std::rand() % 1001;
    }

    Qelemento = tamanho;

    return conjunto;
}

QString Conjunto::formatar(int* conjunto) {
    QString resultado;

    for (int i = 0; i < Qelemento; ++i) {
        resultado += QString::number(conjunto[i]);
        if (i < Qelemento - 1) {
            resultado += " | ";
        }
    }

    return resultado;
}

QString Conjunto::Buscar(int valor) {
    try {
        for (int i = 0; i < Qelemento; ++i) {
            if (conjunto[i] == valor) {
                return QString("Valor Existe e está na posição ") + QString::number(i);
            }
        }
        return QString("Valor não Existe");
    } catch (const std::exception& e) {
        return "Erro: " + QString(e.what());
    }
}
void Conjunto::selectionSort(){
    conjuntoSS = new int[Qelemento];
    for (int i = 0; i<Qelemento;i++){
        int min_idx = i;
        for (int step = i +1 ; step<Qelemento;step++){
        if (conjunto[step] < conjunto[min_idx]){
            min_idx = step;
        }
    }
    int temp = conjunto[i];
    conjunto[i] = conjunto[min_idx];
    conjunto[min_idx] = temp;
    conjuntoSS[i] = conjunto[i];
}
}

QString Conjunto::BuscaPlus(int valor){
    try {
        for (int i = 0; i < Qelemento; ++i) {
            if (conjunto[i] == valor) {
                return QString("Valor Existe e está na posição ") + QString::number(i);
            }
            if(conjuntoSS[i] > valor){
                return QString("Valor não Existe");
        }
    }        return QString("Valor não Existe");

} catch (const std::exception& e) {
        return "Erro: " + QString(e.what());
    }

}
