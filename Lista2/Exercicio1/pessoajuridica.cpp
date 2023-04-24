#include "pessoajuridica.h"

namespace mathd{
const QString &PessoaJuridica::getCNPJ() const
{
    return CNPJ;
}

void PessoaJuridica::setCNPJ(const QString &newCNPJ)
{
    CNPJ = newCNPJ;
}

const QString &PessoaJuridica::getRazaoSocial() const
{
    return razaoSocial;
}

void PessoaJuridica::setRazaoSocial(const QString &newRazaoSocial)
{
    razaoSocial = newRazaoSocial;
}

PessoaJuridica::PessoaJuridica()
{

}

float PessoaJuridica::calcularImpostoDeRenda(float rendaBruta)
{
    return rendaBruta * 0.20;
}

}
