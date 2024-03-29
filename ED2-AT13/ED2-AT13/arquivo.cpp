#include "arquivo.h"

Arquivo::Arquivo() : vetor(0)
{
}

Arquivo::Arquivo(TabHashAluno *entrada) : vetor(0)
{
    if (!entrada)
        throw QString("Vetor nao criado");
    vetor = entrada;
}

void Arquivo::abrir()
{
    if (!vetor)
        throw QString("Vetor nao existe");

    QString endereco_arquivo = "C:/Users/teus4/Downloads/ED2-AT13/ED2-AT13/dados/DadosDosAlunos_Matricula_Nome.csv";
    QFile arquivo(endereco_arquivo);
    if (!arquivo.open(QIODevice::ReadOnly))
        throw QString("Nao foi possivel abrir o arquivo");
    QTextStream in(&arquivo);
    carregar_elementos(in);
    arquivo.close();
}

void Arquivo::carregar_elementos(QTextStream &in)
{
    if (!vetor)
        throw QString("vetor nao existe");

    while (!in.atEnd())
    {
        QString linha = in.readLine();
        QStringList parts = linha.split(";");
        int matricula = parts[0].toInt();
        QString nome = parts[1];
        Aluno aluno(matricula, nome);
        vetor->IncluirDados(aluno);
    }
}
