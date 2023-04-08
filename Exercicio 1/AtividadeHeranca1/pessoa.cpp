#include "pessoa.h"
namespace mathd {

Pessoa::Pessoa():
    nome(""),
    endereco(""),
    telefone(""),
    email("")
{
}
Pessoa::Pessoa(QString nome, QString endereco, QString telefone, QString email):
    nome(nome),
    endereco(endereco),
    telefone(telefone),
    email(email)
{
}

QString Pessoa::getEndereco() const
{
    return endereco;
}

void Pessoa::setEndereco(const QString &newEndereco)
{
    endereco = newEndereco;
}

QString Pessoa::getTelefone() const
{
    return telefone;
}

void Pessoa::setTelefone(QString newTelefone)
{
    telefone = newTelefone;
}

QString Pessoa::getEmail() const
{
    return email;
}

void Pessoa::setEmail(const QString &newEmail)
{
    email = newEmail;
}

QString Pessoa::getNome() const
{


    return nome;
}

void Pessoa::setNome(const QString &newNome)
{
    nome = newNome;
}

QString Pessoa::toString() const {
    return "Nome: " + nome + ", Endereço: " + endereco + ", Telefone" + telefone + ", Email: " + email;
}

}

