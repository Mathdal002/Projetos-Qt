#ifndef MANIPULARARQUIVO_H
#define MANIPULARARQUIVO_H
#include <QString>
#include <fstream>
#include <QStringList>
#include <piloto.h>
#include <vector>


namespace imw{
class ManipularArquivo
{
private:
        QString nomeDoArquivoNoDisco;
        std::vector<Piloto> listaDePilotos;
public:
    ManipularArquivo(QString nomeDoArquivoNoDisco);
    void buscarDadosNoArquivo();
    const std::vector<Piloto> &getlistaDePilotos()const;
    bool ordenaPontuacaoFinal(Piloto x, Piloto y)const;
};
}
#endif // MANIPULARARQUIVO_H
