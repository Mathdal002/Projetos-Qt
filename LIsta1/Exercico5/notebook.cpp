#include "notebook.h"

namespace mathd{

Notebook::Notebook():
    marca(""),
    modelo(""),
    memoriaRam(0),
    capacidade(0),
    processador(""),
    tamanhoDaTela(0),
    sistemaOperacional("")
{

}

Notebook::Notebook(QString marca, QString modelo, int memoriaRam, long capacidade, QString processador, float tamanhoDaTela, QString sistemaOperacional):
    marca(marca),
    modelo(modelo),
    memoriaRam(memoriaRam),
    capacidade(capacidade),
    processador(processador),
    tamanhoDaTela(tamanhoDaTela),
    sistemaOperacional(sistemaOperacional)
{

}

QString Notebook::obterDescricaoCompleta() const{
    QString saida = "";
    saida += (" Marca: " + marca + "\n");
    saida += (" Modelo: " + modelo + "\n");
    saida += (" Memória RAM: " + QString::number(memoriaRam) + "\n");
    saida += (" Capacidade HD/SSD: " + QString::number(capacidade) + "\n");
    saida += (" Processador : " + processador + "\n");
    saida += (" Tamanho da Tela: " + QString::number(tamanhoDaTela) + "\n");
    saida += (" Sistema Operacional: " + sistemaOperacional + "\n");

    return saida;
}


const QString &Notebook::getModelo() const
{
    return modelo;
}

void Notebook::setModelo(const QString &newModelo)
{
    modelo = newModelo;
}

const int &Notebook::getMemoriaRam() const
{
    return memoriaRam;
}

void Notebook::setMemoriaRam(const int &newMemoriaRam)
{
    memoriaRam = newMemoriaRam;
}

long Notebook::getCapacidade() const
{
    return capacidade;
}

void Notebook::setCapacidade(long newCapacidade)
{
    capacidade = newCapacidade;
}

const QString &Notebook::getProcessador() const
{
    return processador;
}

void Notebook::setProcessador(const QString &newProcessador)
{
    processador = newProcessador;
}

float Notebook::getTamanhoDaTela() const
{
    return tamanhoDaTela;
}

void Notebook::setTamanhoDaTela(float newTamanhoDaTela)
{
    tamanhoDaTela = newTamanhoDaTela;
}

const QString &Notebook::getMarca() const
{
    return marca;
}

void Notebook::setMarca(const QString &newMarca)
{
    marca = newMarca;
}

}
