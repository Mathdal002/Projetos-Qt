#include "produto.h"

namespace mathd {

Produto::Produto():
    codigo(0)
{

}


float Produto::obterPrecoDeVenda(float preco) const
{
    return preco;
}

QString Produto::obterTipoDoProduto(QString tipo) const
{

    return tipo;
}


long Produto::getCodigo() const
{
    return codigo;
}

void Produto::setCodigo(long newCodigo)
{
    codigo = newCodigo;
}

}
