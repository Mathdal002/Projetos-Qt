#ifndef PESSOA_H
#define PESSOA_H
#include <QString>
namespace mathd {
class Pessoa {
private:
    QString nome;
    QString endereco;
    QString telefone;
    QString email;
public:
    Pessoa();
    Pessoa(QString nome, QString endereco, QString telefone, QString email);

    QString getNome() const;
    void setNome(const QString &newNome);
    QString getEndereco() const;
    void setEndereco(const QString &newEndereco);
    QString getTelefone() const;
    void setTelefone(QString newTelefone);
    QString getEmail() const;
    void setEmail(const QString &newEmail);
    QString toString() const;
};
}
#endif // PESSOA_H
