#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H
#include <pessoa.h>

namespace mathd {
class PessoaFisica: public Pessoa //herdou de pessoa
{
protected:
    QString cpf;
    QString sexo;
public:
    PessoaFisica();

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

    const QString &getCpf() const;
    void setCpf(const QString &newCpf);

    const QString &getSexo() const;
    void setSexo(const QString &newSexo);
};
}
#endif // PESSOAFISICA_H
