#ifndef PROBLEMA1_H
#define PROBLEMA1_H
#include<QString>

namespace mathd {
class Problema1 {
private:
    int QElemento;
    int *conjunto;
public:
    Problema1();
    int* Conjuntox(int QElemento);
    QString formatar(int* conjunto, int QElemento);

};
}
#endif // PROBLEMA1_H
