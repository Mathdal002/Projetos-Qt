#include "pilha.h"

mathd::Pilha::Pilha(int MaxVetor):
    topo(-1),
    tamanho(0)
{
      try {
            Vetor = new int [tamanho];
            this->tamanho = MaxVetor;
      }catch(std::bad_alloc & errar){
         throw QString("Memoria insuficiente");
      }
}
int mathd::Pilha::retirar(){
    int valor;
        if (this->estaVazio()){throw QString("A Pilha esta vazia");}
        else {
          valor = *(Vetor+topo);
          topo--;
        }
         return valor;
}
int mathd::Pilha::acessar(){
    if (this->estaVazio()) {
          throw QString("A Pilha esta vazia");
       }
       else {
          return *(Vetor+topo);
       }
}
bool mathd::Pilha::estaCheio() const{
    return (this->topo == tamanho-1);
}
bool mathd::Pilha::estaVazio() const{
    return (this->topo == -1);
}
void mathd::Pilha::inserir(int elemento){
  if (this->estaCheio()){ throw QString("A Pilha esta cheio");}
        topo++;
        *(Vetor+topo) = elemento;
}
int mathd::Pilha::Tamanho() const{
    return this->tamanho;
}

mathd::Pilha::~Pilha(){
}
