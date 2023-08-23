#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "QString"

class Conjunto
{
private:
    int Qelemento;
    int *conjunto;
    int *conjuntoSS;
public:
    Conjunto();
    int* Conjuntox(int Qelemento);
    QString formatar(int* Qconjunto);
    QString Buscar(int valor);
    void selectionSort();
    QString BuscaPlus(int valor);
};

#endif // CONJUNTO_H
