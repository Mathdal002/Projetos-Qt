#include "graduado.h"

namespace mathd {

Graduado::Graduado():
    anoDaConclusao(0),
    anoDaColacaoDeGrau(0),
    numeroDoDiploma(0)
{
    Graduado graduadoTeste;
}

long Graduado::getAnoDaConclusao() const
{
    return anoDaConclusao;
}

void Graduado::setAnoDaConclusao(long newAnoDaConclusao)
{
    anoDaConclusao = newAnoDaConclusao;
}

long Graduado::getAnoDaColacaoDeGrau() const
{
    return anoDaColacaoDeGrau;
}

void Graduado::setAnoDaColacaoDeGrau(long newAnoDaColacaoDeGrau)
{
    anoDaColacaoDeGrau = newAnoDaColacaoDeGrau;
}

long Graduado::getNumeroDoDiploma() const
{
    return numeroDoDiploma;
}

void Graduado::setNumeroDoDiploma(long newNumeroDoDiploma)
{
    numeroDoDiploma = newNumeroDoDiploma;
}

}
