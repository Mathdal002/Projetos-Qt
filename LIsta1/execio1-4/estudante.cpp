#include "estudante.h"

namespace mathd {

Estudante::Estudante():
    matricula(0),
    curso(""),
    campus("")
{
    Estudante estudanteTeste;
}

const QString &Estudante::getCurso() const
{
    return curso;
}

void Estudante::setCurso(const QString &newCurso)
{
    curso = newCurso;
}

const QString &Estudante::getCampus() const
{
    return campus;
}

void Estudante::setCampus(const QString &newCampus)
{
    campus = newCampus;
}

long Estudante::getMatricula() const
{
    return matricula;
}

void Estudante::setMatricula(long newMatricula)
{
    matricula = newMatricula;
}

}
