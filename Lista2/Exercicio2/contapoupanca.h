#ifndef CONTAPOUPANCA_H
#define CONTAPOUPANCA_H
#include <contageral.h>

namespace mathd{

class ContaPoupanca: public ContaGeral
{
private:

    double taxa_juros;

public:
    ContaPoupanca(QString nome, int numero, int agencia, double taxa);

    void aplicarJuros();

    double getTaxa_juros() const;
    void setTaxa_juros(double newTaxa_juros);


    void depositar(double valor);
    void sacar(double valor);
    double consultarSaldo();

    QString getNomeDoTitular() const;
    void setNomeDoTitular(const QString &newNomeDoTitular);
    int getNumeroDaConta() const;
    void setNumeroDaConta(int newNumeroDaConta);
    int getNumeroDaAgencia() const;
    void setNumeroDaAgencia(int newNumeroDaAgencia);
    double getSaldo() const;
    void setSaldo(double newSaldo);

};
}

#endif // CONTAPOUPANCA_H
