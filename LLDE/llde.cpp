#include "llde.h"
#include"no.h"
#include<QString>
namespace mathd {
LLDE::LLDE():
    quantidadeElementos(0),
    inicio(0),
    fim(0)
{
}

LLDE::~LLDE(){
    if(inicio) delete inicio;
    if(fim) delete fim;
}

bool LLDE::estaVazia() const{
    if(quantidadeElementos == 0)
        return true;
    else
        return false;
}

void LLDE::inserirInicio(int elemento){
    try{
        No *aux = new NO(elemento);
        if(estaVazia()){
            quantidadeElementos++;
            inicio = fim = aux;
            return;
        }
        
        aux->setProximo(inicio);
        inicio->setAnterior(aux);
        inicio = aux;
        quantidadeElementos++;
    }
    catch(QString &bad_alloc) {
        std::cout<<"\nERRO :" << bad_alloc.toStdString()<<"\n";
    }
}

void LLDE::inserirFim(int elemento){
    try {
        No *aux = new No(elemento);
        if(estaVazia()){
            inicio = aux;
            quantidadeElementos++;
            retur
        }
    } catch (...) {
    }
}

int LLDE::getQuantidadeElementos() const
{
    return quantidadeElementos;
}


}
