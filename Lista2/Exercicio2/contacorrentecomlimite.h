#ifndef CONTACORRENTECOMLIMITE_H
#define CONTACORRENTECOMLIMITE_H
#include <contageral.h>
#include <contacorrentebasica.h>

namespace mathd{

class ContaCorrenteComLimite: public ContaCorrenteBasica
{

private:

    double juros;

public:
    ContaCorrenteComLimite(QString nome, int numero,int agencia, double lim, double j);

     void cobrarJuros();

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
    double getJuros() const;
    void setJuros(double newJuros);
};
}

#endif // CONTACORRENTECOMLIMITE_H
