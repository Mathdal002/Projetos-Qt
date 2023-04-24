#ifndef TV_H
#define TV_H
#include <produto.h>

namespace mathd{

class TV: public Produto //herdou de produto
{
private:
    QString modelo;
    QString marca;
    QString sistemaOperacional;
    float tamanhoDaTela;
public:
    TV();
    TV(QString modelo, QString marca, QString sistemaOperacional, float tamanhoDaTela);

    QString obterDescricaoCompleta() const;

    const QString &getModelo() const;
    void setModelo(const QString &newModelo);

    const QString &getMarca() const;
    void setMarca(const QString &newMarca);

    const QString &getSistemaOperacional() const;
    void setSistemaOperacional(const QString &newSistemaOperacional);

    float getTamanhoDaTela() const;
    void setTamanhoDaTela(float newTamanhoDaTela);
};
}
#endif // TV_H
