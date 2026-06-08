#ifndef RELATORIO_H
#define RELATORIO_H
#include "aluno.h"

void exportarTXT(Aluno alunos[], int total);
void exportarCSV(Aluno alunos[], int total);
void exportarJSON(Aluno alunos[], int total);
void exportarRelatorio(Aluno alunos[], int total);

#endif