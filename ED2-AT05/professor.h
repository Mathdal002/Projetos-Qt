#ifndef PROFESSOR_H
#define PROFESSOR_H

#include <QString>

class Professor
{
public:
    Professor(); // Construtor padrão
    const QString &getMatricula() const;
    void setMatricula(const QString &newMatricula);

    const QString &getNome() const;
    void setNome(const QString &newNome);

    const QString &getDepartamento() const;
    void setDepartamento(const QString &newDepartamento);

    const QString &getTitulacao() const;
    void setTitulacao(const QString &newTitulacao);

    const QString &getTipoContato() const;
    void setTipoContato(const QString &newTipoContato);

private:
    QString matricula;
    QString nome;
    QString departamento;
    QString titulacao;
    QString tipoContato;
};

#endif // PROFESSOR_H
