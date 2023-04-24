#include "cddemusica.h"

namespace mathd{

CDDeMusica::CDDeMusica():
    nomeDoAlbum(""),
    banda(""),
    cantor(""),
    generoMusical("")
{

}

CDDeMusica::CDDeMusica(QString nomeDoAlbum, QString banda, QString cantor, QString generoMusical):
    nomeDoAlbum(nomeDoAlbum),
    banda(banda),
    cantor(cantor),
    generoMusical(generoMusical)
{

}

QString CDDeMusica::obterDescricaoCompleta() const{
    QString saida = "";
    saida += (" Nome do Album: " + nomeDoAlbum + "\n");
    saida += (" Banda: " + banda + "\n");
    saida += (" cantor: " + cantor + "\n");
    saida += (" Gênero: " + generoMusical + "\n");
    return saida;
}

const QString &CDDeMusica::getNomeDoAlbum() const
{
    return nomeDoAlbum;
}

void CDDeMusica::setNomeDoAlbum(const QString &newNomeDoAlbum)
{
    nomeDoAlbum = newNomeDoAlbum;
}

const QString &CDDeMusica::getBanda() const
{
    return banda;
}

void CDDeMusica::setBanda(const QString &newBanda)
{
    banda = newBanda;
}

const QString &CDDeMusica::getCantor() const
{
    return cantor;
}

void CDDeMusica::setCantor(const QString &newCantor)
{
    cantor = newCantor;
}

const QString &CDDeMusica::getGeneroMusical() const
{
    return generoMusical;
}

void CDDeMusica::setGeneroMusical(const QString &newGeneroMusical)
{
    generoMusical = newGeneroMusical;
}

}
