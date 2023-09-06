#include "arquivo.h"
#include <QMessageBox>
#include <QFileDialog>
#include <fstream>
#include <QString>

Arquivo::Arquivo()
{

}



void Arquivo::carregarDadosDoArquivo(const QString &nomeDoArquivo, std::vector<Professor> &professores) {
    try {
        std::fstream arquivo;

        // Abrindo o arquivo de entrada
        arquivo.open(nomeDoArquivo.toStdString().c_str());

        // Verificando erro de abertura do arquivo de entrada
        if (!arquivo.is_open()) {
            qDebug() << "Erro ao abrir o arquivo!";
            throw QString("ERRO: Arquivo não pode ser aberto");
        }

        professores.clear(); // Limpar o vetor de professores existente

        std::string linha;
        while (std::getline(arquivo, linha)) {
            QStringList campos = QString::fromStdString(linha).split(';');

            if (campos.size() >= 5) {
                if (campos[1].trimmed().isEmpty() || campos[2].trimmed().isEmpty() || campos[3].trimmed().isEmpty() || campos[4].isEmpty()) {
                    // Salvar a linha em um arquivo de log
                    std::ofstream logFile("log.txt", std::ios_base::app);
                    logFile << linha << "\n";
                    logFile.close();
                    continue; // Pular a inserção da linha vazia no vetor
                } else {
                    // Se não for vazia, adicionar ao vetor
                    Professor professor;
                    professor.setMatricula(campos[0]);
                    professor.setNome(campos[1]);
                    professor.setDepartamento(campos[2]);
                    professor.setTitulacao(campos[3]);
                    professor.setTipoContato(campos[4]);

                    professores.push_back(professor);
                }
            }
        }
        arquivo.close();

    } catch (...) {
        qDebug() << "Erro durante o carregamento dos dados.";
    }
}
