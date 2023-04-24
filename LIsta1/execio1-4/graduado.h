#ifndef GRADUADO_H
#define GRADUADO_H
#include <estudante.h>

namespace mathd {

class Graduado: public Estudante //herdou de Estudante
{
private:
    long anoDaConclusao;
    long anoDaColacaoDeGrau;
    long numeroDoDiploma;
public:
    Graduado();

    const QString &getNome() const;
    void setNome(const QString &newNome);

    const QString &getEndereco() const;
    void setEndereco(const QString &newEndereco);

    long getTelefone() const;
    void setTelefone(long newTelefone);

    const QString &getEmail() const;
    void setEmail(const QString &newEmail);

    long getMatricula() const;
    void setMatricula(long newMatricula);

    const QString &getCurso() const;
    void setCurso(const QString &newCurso);

    const QString &getCampus() const;
    void setCampus(const QString &newCampus);

    long getAnoDaConclusao() const;
    void setAnoDaConclusao(long newAnoDaConclusao);

    long getAnoDaColacaoDeGrau() const;
    void setAnoDaColacaoDeGrau(long newAnoDaColacaoDeGrau);

    long getNumeroDoDiploma() const;
    void setNumeroDoDiploma(long newNumeroDoDiploma);

    void toString();
};
}
#endif // GRADUADO_H
