#include "contacorrentecomlimite.h"

namespace mathd{

ContaCorrenteComLimite::ContaCorrenteComLimite(QString nome, int numero, int agencia, double lim, double j):
    ContaCorrenteBasica(nome, numero, agencia, lim),
    juros(j)
{

}

void ContaCorrenteComLimite::cobrarJuros()
{
    saldo += saldo * (juros / 100);
}


double ContaCorrenteComLimite::getJuros() const
{
    return juros;
}

void ContaCorrenteComLimite::setJuros(double newJuros)
{
    juros = newJuros;
}

}


