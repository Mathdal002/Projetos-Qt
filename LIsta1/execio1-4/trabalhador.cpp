#include "trabalhador.h"

namespace mathd {

Trabalhador::Trabalhador():
    funcao(""),
    departamento(""),
    salario(0)
{
    Trabalhador trabalhadorTeste;
}

const QString &Trabalhador::getDepartamento() const
{
    return departamento;
}

void Trabalhador::setDepartamento(const QString &newDepartamento)
{
    departamento = newDepartamento;
}

long Trabalhador::getSalario() const
{
    return salario;
}

void Trabalhador::setSalario(long newSalario)
{
    salario = newSalario;
}

const QString &Trabalhador::getFuncao() const
{
    return funcao;
}

void Trabalhador::setFuncao(const QString &newFuncao)
{
    funcao = newFuncao;
}

}
