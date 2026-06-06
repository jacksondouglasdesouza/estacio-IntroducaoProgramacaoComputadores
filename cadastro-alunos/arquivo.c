#include <stdio.h>
#include <stdlib.h>
#include "arquivo.h"

void salvarAlunos(Aluno alunos[], int total)
{
   FILE *arquivo = fopen("alunos.dat", "wb");

   if (arquivo == NULL)
   {
      printf("[ *ERROR! ]\n");
      printf("Erro ao salvar o arquivo!\n");
      return;
   }

   fwrite(&total, sizeof(int), 1, arquivo);
   fwrite(alunos, sizeof(Aluno), total, arquivo);

   fclose(arquivo);

   printf("\n[ DADOS SALVOS COM SUCESSO! ]\n");
}

//--

void carregarAlunos(Aluno alunos[], int *total)
{
   FILE *arquivo = fopen("alunos.dat", "rb");

   if (arquivo == NULL)
   {
      *total = 0;
      return;
   }

   fread(total, sizeof(int), 1, arquivo);
   fread(alunos, sizeof(Aluno), *total, arquivo);
   fclose(arquivo);

   printf("Dados carregados: %d aluno(s).\n", *total);
}
