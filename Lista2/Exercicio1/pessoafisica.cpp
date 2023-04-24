#include "pessoafisica.h"

namespace mathd {
const QString &PessoaFisica::getCpf() const
{
    return cpf;
}

void PessoaFisica::setCpf(const QString &newCpf)
{
    cpf = newCpf;
}

const QString &PessoaFisica::getSexo() const
{
    return sexo;
}

void PessoaFisica::setSexo(const QString &newSexo)
{
    sexo = newSexo;
}

PessoaFisica::PessoaFisica()
{

}

float PessoaFisica::calcularImpostoDeRenda(float rendaBruta)
{
    if(rendaBruta >= 0 && rendaBruta <= 1400.00){

        return 0;

    } else if(rendaBruta > 1400.00 && rendaBruta <= 2100.00){

        return rendaBruta * 0.10;

    } else if(rendaBruta > 2100.00 && rendaBruta <= 2800.00){

        return rendaBruta * 0.15;

    } else if(rendaBruta > 2800.00 && rendaBruta <= 3600.00){

        return rendaBruta * 0.25;

    } else if(rendaBruta > 3600.00){

        return rendaBruta * 0.30;
    }
}

}
