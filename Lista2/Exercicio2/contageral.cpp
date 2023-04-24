#include "contageral.h"

namespace mathd{

ContaGeral::ContaGeral(QString nome, int numero, int agencia):
    nomeDoTitular(nome),
    numeroDaConta(numero),
    numeroDaAgencia(agencia),
    saldo(0)
{
}

void ContaGeral::depositar(double valor)
{
    saldo += valor;
}

void ContaGeral::sacar(double valor)
{
    saldo -= valor;
}

double ContaGeral::consultarSaldo()
{
    return saldo;
}

int ContaGeral::getNumeroDaConta() const
{
    return numeroDaConta;
}

void ContaGeral::setNumeroDaConta(int newNumeroDaConta)
{
    numeroDaConta = newNumeroDaConta;
}

int ContaGeral::getNumeroDaAgencia() const
{
    return numeroDaAgencia;
}

void ContaGeral::setNumeroDaAgencia(int newNumeroDaAgencia)
{
    numeroDaAgencia = newNumeroDaAgencia;
}

double ContaGeral::getSaldo() const
{
    return saldo;
}

void ContaGeral::setSaldo(double newSaldo)
{
    saldo = newSaldo;
}

QString ContaGeral::getNomeDoTitular() const
{
    return nomeDoTitular;
}

void ContaGeral::setNomeDoTitular(const QString &newNomeDoTitular)
{
    nomeDoTitular = newNomeDoTitular;
}

}
