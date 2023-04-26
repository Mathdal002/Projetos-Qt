#include "no.h"
namespace mathd {
No::No(){
}

No::No(int valor):
    dado(0),
    proximo(0),
    anterior(0)
{
}

No::~No(){
    proximo = 0;
    anterior = 0;
}
No *No::getProximo() const
{
    return proximo;
}

void No::setProximo(No *newProximo)
{
    proximo = newProximo;
}

No *No::getAnterior() const
{
    return anterior;
}

void No::setAnterior(No *newAnterior)
{
    anterior = newAnterior;
}

int No::getDado() const
{
    return dado;
}

void No::setDado(int newDado)
{
    dado = newDado;
}

}
