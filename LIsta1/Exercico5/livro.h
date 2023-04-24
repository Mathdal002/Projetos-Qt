#ifndef LIVRO_H
#define LIVRO_H
#include <produto.h>

namespace mathd{


class livro: public Produto //herdou de produto
{
private:
    QString titulo;
    QString autor;
    QString tradutor;
    QString editora;
    int anoDePublicacao;

public:
    livro();
    livro(QString titulo, QString autor, QString tradutor, QString editora, int anoDePublicacao);

    QString obterDescricaoCompleta() const;

    const QString &getTitulo() const;
    void setTitulo(const QString &newTitulo);

    const QString &getAutor() const;
    void setAutor(const QString &newAutor);

    const QString &getEditora() const;
    void setEditora(const QString &newEditora);

    int getAnoDePublicacao() const;
    void setAnoDePublicacao(int newAnoDePublicacao);
};
}
#endif // LIVRO_H
