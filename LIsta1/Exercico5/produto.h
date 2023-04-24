#ifndef PRODUTO_H
#define PRODUTO_H
#include <QString>

namespace mathd {

class Produto
{
protected:
    long codigo;
public:
    Produto();
    QString virtual obterDescricaoCompleta() const = 0;
    float obterPrecoDeVenda(float preco) const;
    QString obterTipoDoProduto(QString tipo) const;
    long getCodigo() const;
    void setCodigo(long newCodigo);
};
}
#endif // PRODUTO_H
