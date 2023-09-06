#include "professor.h"

Professor::Professor()
{

}

const QString &Professor::getMatricula() const
{
    return matricula;
}

void Professor::setMatricula(const QString &newMatricula)
{
    matricula = newMatricula;
}

const QString &Professor::getNome() const
{
    return nome;
}

void Professor::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Professor::getDepartamento() const
{
    return departamento;
}

void Professor::setDepartamento(const QString &newDepartamento)
{
    departamento = newDepartamento;
}

const QString &Professor::getTitulacao() const
{
    return titulacao;
}

void Professor::setTitulacao(const QString &newTitulacao)
{
    titulacao = newTitulacao;
}

const QString &Professor::getTipoContato() const
{
    return tipoContato;
}

void Professor::setTipoContato(const QString &newTipoContato)
{
    tipoContato = newTipoContato;
}
