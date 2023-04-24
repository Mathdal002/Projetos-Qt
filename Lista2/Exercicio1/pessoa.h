#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

namespace mathd {
class Pessoa
{
protected:
    QString nome;
    QString endereco;
    QString telefone;
    QString email;
    float rendaBruta;
public:
    Pessoa();
    float calcularImpostoDeRenda(float rendaBruta);

    const QString &getNome() const;
    void setNome(const QString &newNome);

    const QString &getEndereco() const;
    void setEndereco(const QString &newEndereco);

    const QString &getTelefone() const;
    void setTelefone(const QString &newTelefone);

    const QString &getEmail() const;
    void setEmail(const QString &newEmail);

    float getRendaBruta() const;
    void setRendaBruta(float newRendaBruta);

};
}
#endif // PESSOA_H
