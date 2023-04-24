#include "pessoa.h"

namespace mathd {

Pessoa::Pessoa():
    nome(""),
    endereco(""),
    telefone(0),
    email("")
{
    Pessoa pessoaTeste;
}

const QString &Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const QString &newNome)
{
    nome = newNome;
}

const QString &Pessoa::getEndereco() const
{
    return endereco;
}

void Pessoa::setEndereco(const QString &newEndereco)
{
    endereco = newEndereco;
}

long Pessoa::getTelefone() const
{
    return telefone;
}

void Pessoa::setTelefone(long newTelefone)
{
    telefone = newTelefone;
}

const QString &Pessoa::getEmail() const
{
    return email;
}

void Pessoa::setEmail(const QString &newEmail)
{
    email = newEmail;
}

}
