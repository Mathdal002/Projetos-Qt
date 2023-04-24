#ifndef CDDEMUSICA_H
#define CDDEMUSICA_H
#include <produto.h>

namespace mathd{

class CDDeMusica: public Produto //herdou de Produto
{
private:
    QString nomeDoAlbum;
    QString banda;
    QString cantor;
    QString generoMusical;
public:
    CDDeMusica();
    CDDeMusica(QString nomeDoAlbum, QString banda, QString cantor, QString generoMusical);

    QString obterDescricaoCompleta() const;

    const QString &getNomeDoAlbum() const;
    void setNomeDoAlbum(const QString &newNomeDoAlbum);

    const QString &getBanda() const;
    void setBanda(const QString &newBanda);

    const QString &getCantor() const;
    void setCantor(const QString &newCantor);

    const QString &getGeneroMusical() const;
    void setGeneroMusical(const QString &newGeneroMusical);
};
}

#endif // CDDEMUSICA_H
