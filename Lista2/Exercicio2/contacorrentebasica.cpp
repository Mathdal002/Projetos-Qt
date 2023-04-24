#include "contacorrentebasica.h"

namespace mathd{

ContaCorrenteBasica::ContaCorrenteBasica(QString nome, int numero, int agencia, double lim):
    ContaGeral(nome, numero, agencia),
    limite(lim)
{

}

void ContaCorrenteBasica::definirLimite(double novoLimite)
{
    limite = novoLimite;
}

double ContaCorrenteBasica::consultarLimite()
{
    return limite;
}

void ContaCorrenteBasica::sacar(double valor)
{
    if(valor <= saldo){
        saldo -= valor;
    }
}


double ContaCorrenteBasica::getLimite() const
{
    return limite;
}

void ContaCorrenteBasica::setLimite(double newLimite)
{
    limite = newLimite;
}

}
