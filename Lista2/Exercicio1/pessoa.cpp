#include "pessoa.h"

namespace mathd {
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

const QString &Pessoa::getTelefone() const
{
    return telefone;
}

void Pessoa::setTelefone(const QString &newTelefone)
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

float Pessoa::getRendaBruta() const
{
    return rendaBruta;
}

void Pessoa::setRendaBruta(float newRendaBruta)
{
    rendaBruta = newRendaBruta;
}

Pessoa::Pessoa()
{

}
}
