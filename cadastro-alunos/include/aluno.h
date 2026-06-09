#ifndef ALUNO_H
#define ALUNO_H

#define MAX_ALUNOS 1000

typedef struct
{
   char nome[100];
   int matricula;
   double nota1, nota2, nota3, nota4, media;
   char situacao[20];
   int ativo;
} Aluno;

#endif