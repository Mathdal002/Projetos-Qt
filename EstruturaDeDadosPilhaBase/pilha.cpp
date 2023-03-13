#include "pilha.h"

jpa::Pilha::Pilha(int MaxVetor):
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
int jpa::Pilha::retirar(){
    int valor;
        if (this->estaVazio()){throw QString("A Pilha esta vazia");}
        else {
          valor = *(Vetor+topo);
          topo--;
        }
         return valor;
}
int jpa::Pilha::acessar(){
    if (this->estaVazio()) {
          throw QString("A Pilha esta vazia");
       }
       else {
          return *(Vetor+topo);
       }
}
bool jpa::Pilha::estaCheio() const{
    return (this->topo == tamanho-1);
}
bool jpa::Pilha::estaVazio() const{
    return (this->topo == -1);
}
void jpa::Pilha::inserir(int elemento){
  if (this->estaCheio()){ throw QString("A Pilha esta cheio");}
        topo++;
        *(Vetor+topo) = elemento;
}
int jpa::Pilha::Tamanho() const{
    return this->tamanho;
}

jpa::Pilha::~Pilha(){
}
