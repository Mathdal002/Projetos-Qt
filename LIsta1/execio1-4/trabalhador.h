#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <pessoa.h>

namespace mathd {

class Trabalhador: public Pessoa //herdou de pessoa
{
private:
    QString funcao;
    QString departamento;
    long salario;
public:
    Trabalhador();

    const QString &getNome() const;
    void setNome(const QString &newNome);

    const QString &getEndereco() const;
    void setEndereco(const QString &newEndereco);

    long getTelefone() const;
    void setTelefone(long newTelefone);

    const QString &getEmail() const;
    void setEmail(const QString &newEmail);


    const QString &getFuncao() const;
    void setFuncao(const QString &newFuncao);

    const QString &getDepartamento() const;
    void setDepartamento(const QString &newDepartamento);

    long getSalario() const;
    void setSalario(long newSalario);

    void toString();
};
}
#endif // TRABALHADOR_H
