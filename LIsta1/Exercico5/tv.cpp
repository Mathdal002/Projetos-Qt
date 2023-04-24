#include "tv.h"

namespace mathd {

TV::TV():
    modelo(""),
    marca(""),
    sistemaOperacional(""),
    tamanhoDaTela(0)
{

}

TV::TV(QString modelo, QString marca, QString sistemaOperacional, float tamanhoDaTela):
    modelo(modelo),
    marca(marca),
    sistemaOperacional(sistemaOperacional),
    tamanhoDaTela(tamanhoDaTela)
{

}

QString TV::obterDescricaoCompleta() const{
    QString saida = "";
    saida += (" Modelo: " + modelo + "\n");
    saida += (" Marca: " + marca + "\n");
    saida += (" Sistema Operacional: " + sistemaOperacional + "\n");
    saida += (" Tamanho da Tela: " + QString::number(tamanhoDaTela) + "\n");

    return saida;
}

const QString &TV::getMarca() const
{
    return marca;
}

void TV::setMarca(const QString &newMarca)
{
    marca = newMarca;
}

const QString &TV::getSistemaOperacional() const
{
    return sistemaOperacional;
}

void TV::setSistemaOperacional(const QString &newSistemaOperacional)
{
    sistemaOperacional = newSistemaOperacional;
}

float TV::getTamanhoDaTela() const
{
    return tamanhoDaTela;
}

void TV::setTamanhoDaTela(float newTamanhoDaTela)
{
    tamanhoDaTela = newTamanhoDaTela;
}

const QString &TV::getModelo() const
{
    return modelo;
}

void TV::setModelo(const QString &newModelo)
{
    modelo = newModelo;
}

}
