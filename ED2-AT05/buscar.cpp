#include "buscar.h"
#include <QMessageBox>
#include <QFileDialog>
#include <QString>

Buscar::Buscar()
{

}

void Buscar::busca(Ui::MainWindow *ui, const std::vector<Professor> &professores)
{
    try {
        int index = ui->comboBox->currentIndex();
        int ordenador = ui->comboBoxOrdenacao->currentIndex();

        if (index == 1) {
            if (ordenador != 0) {
                throw QString("Coloque ordenação por matrícula");
            }

            int matriculaBuscada = ui->lineEditDado->text().toInt();

            for (int i = 0; i < professores.size(); ++i) {
                if (professores[i].getMatricula().toInt() == matriculaBuscada) {
                    // Valor encontrado no vetor
                    ui->tableWidgetDados->selectRow(i);
                    return;
                }
            }

            // Se não encontrou, mostra uma mensagem
            throw QString("Matrícula não encontrada");
        }

        if (index == 0) {
            if (ordenador != 1) {
                throw QString("Coloque ordenação por nome");
            }

            QString nomeBuscado = ui->lineEditDado->text();

            for (int i = 0; i < professores.size(); ++i) {
                if (professores[i].getNome() == nomeBuscado) {
                    // Valor encontrado no vetor
                    ui->tableWidgetDados->selectRow(i);
                    return;
                }
            }

            // Se não encontrou, mostra uma mensagem
            throw QString("Nome não encontrado");
        }

        // Restante do código para outras opções de busca...



    if (index == 2) {
        if (ordenador != 1) {
            throw QString("Coloque ordenação por nome");
            return;
        }

        QString nomeBuscado = ui->lineEditDado->text();
        int inicio = 0;
        int fim = professores.size() - 1;
        bool nomeEncontrado = false;

        while (inicio <= fim) {
            int meio = (inicio + fim) / 2; // Índice do meio

            if (professores[meio].getNome() == nomeBuscado) {
                // Nome encontrado
                ui->tableWidgetDados->selectRow(meio);
                nomeEncontrado = true;
                break; // Encerra a busca, pois já encontrou
            } else if (professores[meio].getNome() < nomeBuscado) {
                inicio = meio + 1; // Busca na metade superior
            } else {
                fim = meio - 1; // Busca na metade inferior
            }
        }

        if (!nomeEncontrado) {
            throw QString("Nome não encontrado");
        }
    }

    if (index == 3) {
        if (ordenador != 0) {
            throw QString("Coloque ordenação por matrícula");
            return;
        }

        int matriculaBuscada = ui->lineEditDado->text().toInt();
        int inicio = 0;
        int fim = professores.size() - 1;
        bool matriculaEncontrada = false;

        while (inicio <= fim) {
            int meio = (inicio + fim) / 2; // Índice do meio

            if (professores[meio].getMatricula().toInt() == matriculaBuscada) {
                // Matrícula encontrada
                ui->tableWidgetDados->selectRow(meio);
                matriculaEncontrada = true;
                break; // Encerra a busca, pois já encontrou
            } else if (professores[meio].getMatricula().toInt() < matriculaBuscada) {
                inicio = meio + 1; // Busca na metade superior
            } else {
                fim = meio - 1; // Busca na metade inferior
            }
        }

        if (!matriculaEncontrada) {
            throw QString("Matrícula não encontrada");
        }
    }
    } catch (std::bad_alloc&) {
        throw QString("Erro: Falha de alocação de memória");
    }
}
