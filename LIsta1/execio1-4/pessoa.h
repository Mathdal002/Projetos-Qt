#ifndef PESSOA_H
#define PESSOA_H
#include <QString>

namespace mathd {

class Pessoa
{
private:
    QString nome;
    QString endereco;
    long telefone;
    QString email;
public:
    Pessoa();

    const QString &getNome() const;
    void setNome(const QString &newNome);

    const QString &getEndereco() const;
    void setEndereco(const QString &newEndereco);

    long getTelefone() const;
    void setTelefone(long newTelefone);

    const QString &getEmail() const;
    void setEmail(const QString &newEmail);

    void toString();
};
}
#endif // PESSOA_H
