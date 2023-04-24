#include "livro.h"

namespace mathd{

livro::livro():
    titulo(""),
    autor(""),
    tradutor(""),
    editora(""),
    anoDePublicacao(0)
{

}

livro::livro(QString titulo, QString autor, QString tradutor, QString editora, int anoDePublicacao):
    titulo(titulo),
    autor(autor),
    tradutor(tradutor),
    editora(editora),
    anoDePublicacao(anoDePublicacao)
{

}

QString livro::obterDescricaoCompleta() const{
    QString saida = "";
    saida += (" Título: " + titulo + "\n");
    saida += (" Autor: " + autor + "\n");
    saida += (" Tradutor: " + tradutor + "\n");
    saida += (" Editora: " + editora + "\n");
    saida += ("Ano de Publicação: " + QString::number(anoDePublicacao) +"\n");
    return saida;
}

const QString &livro::getAutor() const
{
    return autor;
}

void livro::setAutor(const QString &newAutor)
{
    autor = newAutor;
}

const QString &livro::getEditora() const
{
    return editora;
}

void livro::setEditora(const QString &newEditora)
{
    editora = newEditora;
}

int livro::getAnoDePublicacao() const
{
    return anoDePublicacao;
}

void livro::setAnoDePublicacao(int newAnoDePublicacao)
{
    anoDePublicacao = newAnoDePublicacao;
}

const QString &livro::getTitulo() const
{
    return titulo;
}

void livro::setTitulo(const QString &newTitulo)
{
    titulo = newTitulo;
}

}
