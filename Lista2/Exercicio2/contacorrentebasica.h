#ifndef CONTACORRENTEBASICA_H
#define CONTACORRENTEBASICA_H
#include <contageral.h>

namespace mathd{

class ContaCorrenteBasica: public ContaGeral
{
private:

    double limite;

public:

    ContaCorrenteBasica(QString nome, int numero, int agencia, double lim);

    void definirLimite(double novoLimite);
    double consultarLimite();
    void sacar(double valor);

    void depositar(double valor);
    double consultarSaldo();

    QString getNomeDoTitular() const;
    void setNomeDoTitular(const QString &newNomeDoTitular);
    int getNumeroDaConta() const;
    void setNumeroDaConta(int newNumeroDaConta);
    int getNumeroDaAgencia() const;
    void setNumeroDaAgencia(int newNumeroDaAgencia);
    double getSaldo() const;
    void setSaldo(double newSaldo);
    double getLimite() const;
    void setLimite(double newLimite);
};
}

#endif // CONTACORRENTEBASICA_H
