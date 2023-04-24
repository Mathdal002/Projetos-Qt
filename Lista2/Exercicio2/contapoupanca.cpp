#include "contapoupanca.h"

namespace mathd{

ContaPoupanca::ContaPoupanca(QString nome, int numero, int agencia, double taxa):
    ContaGeral(nome, numero, agencia),
    taxa_juros(taxa)
{
}

void ContaPoupanca::aplicarJuros()
{
    saldo += saldo * (taxa_juros / 100);
}

double ContaPoupanca::getTaxa_juros() const
{
    return taxa_juros;
}

void ContaPoupanca::setTaxa_juros(double newTaxa_juros)
{
    taxa_juros = newTaxa_juros;
}
}
