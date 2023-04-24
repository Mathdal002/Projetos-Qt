#ifndef ESTUDANTE_H
#define ESTUDANTE_H
#include <pessoa.h>

namespace mathd {

class Estudante: public Pessoa //herdou de pessoa
{
private:
    long matricula;
    QString curso;
    QString campus;
public:
    Estudante();

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

    void toString();
};
}
#endif // ESTUDANTE_H
