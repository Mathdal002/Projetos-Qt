#ifndef CONTAGERAL_H
#define CONTAGERAL_H
#include <QString>

namespace mathd{

class ContaGeral
{
protected:

    QString nomeDoTitular;
    int numeroDaConta;
    int numeroDaAgencia;
    double saldo;

public:
    ContaGeral(QString nome, int numero, int agencia);

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

#endif // CONTAGERAL_H
