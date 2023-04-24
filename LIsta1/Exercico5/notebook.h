#ifndef NOTEBOOK_H
#define NOTEBOOK_H
#include <produto.h>

namespace mathd{

class Notebook: public Produto //herdou de Produto
{
private:
    QString marca;
    QString modelo;
    int memoriaRam;
    long capacidade;
    QString processador;
    float tamanhoDaTela;
    QString sistemaOperacional;
public:
    Notebook();
    Notebook(QString marca, QString modelo, int memoriaRam, long capacidade, QString processador, float tamanhoDaTela, QString sistemaOperacional);

    QString obterDescricaoCompleta() const;

    const QString &getMarca() const;
    void setMarca(const QString &newMarca);

    const QString &getModelo() const;
    void setModelo(const QString &newModelo);

    const int &getMemoriaRam() const;
    void setMemoriaRam(const int &newMemoriaRam);

    long getCapacidade() const;
    void setCapacidade(long newCapacidade);

    const QString &getProcessador() const;
    void setProcessador(const QString &newProcessador);

    float getTamanhoDaTela() const;
    void setTamanhoDaTela(float newTamanhoDaTela);

    const QString &getSistemaOperacional() const;
    void setSistemaOperacional(const QString &newSistemaOperacional);
};
}

#endif // NOTEBOOK_H
