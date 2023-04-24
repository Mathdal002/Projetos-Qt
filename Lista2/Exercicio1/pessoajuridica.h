#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H
#include <pessoa.h>

namespace mathd {
class PessoaJuridica: public Pessoa //herdou de pessoa
{
private:
    QString CNPJ;
    QString razaoSocial;
public:
    PessoaJuridica();

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

    const QString &getCNPJ() const;
    void setCNPJ(const QString &newCNPJ);

    const QString &getRazaoSocial() const;
    void setRazaoSocial(const QString &newRazaoSocial);
};
}
#endif // PESSOAJURIDICA_H
