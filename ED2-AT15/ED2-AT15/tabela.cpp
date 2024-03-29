#include "tabela.h"

Tabela::Tabela() : tabela(0),
    grafo(0)
{
}

Tabela::Tabela(QTableWidget *parent, const int &tamanho) : tabela(0),
    grafo(0),
    tamanho_tabela(0)
{
    if (!parent)
        throw QString("tabela nao criada");
    if (tamanho <= 0)
        throw QString("tamanho invalido");
    this->tabela = parent;
    try
    {
        grafo = new Grafo(tamanho);
        this->tamanho_tabela = tamanho;
    }
    catch (const std::bad_alloc &e)
    {
        throw QString("Nao foi possivel alocar memoria");
    }
}

Tabela::Tabela(QTableWidget *parent, Grafo* grafo, const int &tamanho) : tabela(0),
    grafo(0),
    tamanho_tabela(0)
{
    if (!parent)
        throw QString("tabela nao criada");
    if (tamanho <= 0)
        throw QString("tamanho invalido");
    if (!grafo){
        throw QString("grafo nao criado");
    }
    this->tabela = parent;
    try
    {
        this->tamanho_tabela = tamanho;
        this->grafo = grafo;
    }
    catch (std::bad_alloc &e)
    {
        throw QString("Nao foi possivel alocar memoria");
    }
}

Grafo *Tabela::getVetor() const
{
    return grafo;
}

Tabela::~Tabela()
{
    if (grafo)
        delete grafo;
}

void Tabela::start()
{
    if (!grafo)
    {
        throw QString("Grafo nao criado");
    }
    if (!tabela)
        throw QString("tabela nao localizada {start}");
    tabela->setRowCount(tamanho_tabela);
    tabela->setColumnCount(tamanho_tabela);
    tabela->setEditTriggers(QAbstractItemView::NoEditTriggers);
}

void Tabela::limpar()
{
    if (!tabela)
        throw QString("tabela nao localizada, {limpartabela}");
    tabela->setColumnCount(0);
    tabela->setRowCount(0);
    tabela->clearContents();
    start();
}

void Tabela::atualizar()
{
    if (!tabela)
        throw QString("tabela nao localizada {atualizar}");

    if (!grafo)
        throw QString("grafo nao localizado {atualizar}");

    limpar();
    for (int i = 0; i < tamanho_tabela; ++i)
    {
        for (int j = 0; j < tamanho_tabela; ++j)
        {
            if (grafo->getNOGrafo(i, j) == -1)
            {
                tabela->setItem(i, j, new QTableWidgetItem("*"));
            }
            else
            {
                tabela->setItem(i, j, new QTableWidgetItem(QString::number(grafo->getNOGrafo(i, j))));
            }
        }
    }
}

void Tabela::inserirAresta(const int &vertice1, const int &vertice2, const int &peso)
{
    if (!grafo)
    {
        throw QString("Grafo nao criado");
    }
    grafo->inserirAresta(vertice1, vertice2, peso);
    atualizar();
}
void Tabela::alterarAresta(const int &vertice1, const int &vertice2, const int &peso)
{
    if (!grafo)
    {
        throw QString("Grafo nao criado");
    }
    grafo->alterarAresta(vertice1, vertice2, peso);
    atualizar();
}
void Tabela::removerAresta(const int &vertice1, const int &vertice2)
{
    if (!grafo)
    {
        throw QString("Grafo nao criado");
    }
    grafo->removerAresta(vertice1, vertice2);
    atualizar();
}
