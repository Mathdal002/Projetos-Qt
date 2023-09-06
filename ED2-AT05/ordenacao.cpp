#include "ordenacao.h"
#include <QMessageBox>
#include <QFileDialog>
#include<fstream>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QString>
Ordenacao::Ordenacao()
{

}

void Ordenacao::selectionSort(int comboIndex, std::vector<Professor> &professores) {
    int n = professores.size();

    if (comboIndex == 0) { // Ordenar por matrícula
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                int matricula1 = professores[step].getMatricula().toInt();
                int matricula2 = professores[min_idx].getMatricula().toInt();

                if (matricula1 < matricula2) {
                    min_idx = step;
                }
            }

            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    } else if (comboIndex == 1) { // Ordenar por nome
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                QString nome1 = professores[step].getNome();
                QString nome2 = professores[min_idx].getNome();

                if (nome1 < nome2) {
                    min_idx = step;
                }
            }

            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    }


    else if (comboIndex == 2) { // Ordenar por Departamento e depois por Nome
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                QString dept1 = professores[step].getDepartamento();
                QString dept2 = professores[min_idx].getDepartamento();

                if (dept1 < dept2) {
                    min_idx = step;
                } else if (dept1 == dept2) {
                    QString nome1 = professores[step].getNome();
                    QString nome2 = professores[min_idx].getNome();

                    if (nome1 < nome2) {
                        min_idx = step;
                    }
                }
            }

            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    }

    else if (comboIndex == 3) { // Ordenar por Titulação e depois por Nome
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                QString titulacao1 = professores[step].getTitulacao();
                QString titulacao2 = professores[min_idx].getTitulacao();

                if (titulacao1 < titulacao2) {
                    min_idx = step;
                } else if (titulacao1 == titulacao2) {
                    QString nome1 = professores[step].getNome();
                    QString nome2 = professores[min_idx].getNome();

                    if (nome1 < nome2) {
                        min_idx = step;
                    }
                }
            }

            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    }
    else if (comboIndex == 5) { // Ordenar por Tipo de Contato e depois por Nome
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                QString departamento1 = professores[step].getDepartamento();
                QString departamento2 = professores[min_idx].getDepartamento();

                if (departamento1 < departamento2) {
                    min_idx = step;
                } else if (departamento1 == departamento2) {
                    QString titulacao1 = professores[step].getTipoContato();
                    QString titulacao2 = professores[min_idx].getTipoContato();

                    if (titulacao1 < titulacao2) {
                        min_idx = step;
                    } else if (titulacao1 == titulacao2) {
                        QString nome1 = professores[step].getNome();
                        QString nome2 = professores[min_idx].getNome();

                        if (nome1 < nome2) {
                            min_idx = step;
                        }
                    }
                }
            }

            // Após encontrar o índice mínimo, troque os elementos na lista
            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    }



    else if (comboIndex == 4) { // Ordenar por Departamento, Titulação e depois por Nome
        for (int i = 0; i < n - 1; i++) {
            int min_idx = i;

            for (int step = i + 1; step < n; step++) {
                QString departamento1 = professores[step].getDepartamento();
                QString departamento2 = professores[min_idx].getDepartamento();

                if (departamento1 < departamento2) {
                    min_idx = step;
                } else if (departamento1 == departamento2) {
                    QString titulacao1 = professores[step].getTitulacao();
                    QString titulacao2 = professores[min_idx].getTitulacao();

                    if (titulacao1 < titulacao2) {
                        min_idx = step;
                    } else if (titulacao1 == titulacao2) {
                        QString nome1 = professores[step].getNome();
                        QString nome2 = professores[min_idx].getNome();

                        if (nome1 < nome2) {
                            min_idx = step;
                        }
                    }
                }
            }

            // Após encontrar o índice mínimo, troque os elementos na lista
            if (min_idx != i) {
                std::swap(professores[i], professores[min_idx]);
            }
        }
    }
}
