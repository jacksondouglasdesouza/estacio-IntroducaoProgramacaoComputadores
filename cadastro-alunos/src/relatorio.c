#include <stdio.h>
#include <stdlib.h>
#include "../include/relatorio.h"

void exportarRelatorio(Aluno alunos[], int total)
{
   if (total == 0)
   {
      printf("Nenhum aluno cadastrado até o momento!\n");
      return;
   }

   int opcao;

   printf("\n    --- Exportar relatório ---\n");
   printf("1. Exportar relatório em .txt\n");
   printf("2. Exportar relatório em .csv\n");
   printf("3. Exportar relatório em .json\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   while (opcao < 1 || opcao > 3)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1. Exportar relatório em .txt\n");
      printf("2. Exportar relatório em .csv\n");
      printf("3. Exportar relatório em .json\n");
      printf("Opção: ");
      scanf("%d", &opcao);
   }

   switch (opcao)
   {
   case 1:
      exportarTXT(alunos, total);
      break;
   case 2:
      exportarCSV(alunos, total);
      break;
   case 3:
      exportarJSON(alunos, total);
      break;
   }
}

//--

void exportarTXT(Aluno alunos[], int total)
{

   FILE *arquivo = fopen("data/alunos.txt", "w");

   if (arquivo == NULL)
   {
      printf("Erro ao criar o arquivo .txt!\n");
      return;
   }

   fprintf(arquivo, "========================================\n");
   fprintf(arquivo, "     RELATÓRIO DE ALUNOS\n");
   fprintf(arquivo, "========================================\n\n");

   for (int i = 0; i < total; i++)
   {
      if (alunos[i].ativo == 1)
      {
         fprintf(arquivo, "--- Aluno %d ---\n", i + 1);
         fprintf(arquivo, "Nome: %s\n", alunos[i].nome);
         fprintf(arquivo, "Matricula: %d\n", alunos[i].matricula);
         fprintf(arquivo, "Nota 01: %.2lf\n", alunos[i].nota1);
         fprintf(arquivo, "Nota 02: %.2lf\n", alunos[i].nota2);
         fprintf(arquivo, "Nota 03: %.2lf\n", alunos[i].nota3);
         fprintf(arquivo, "Nota 04: %.2lf\n", alunos[i].nota4);
         fprintf(arquivo, "Media: %.2lf\n", alunos[i].media);
         fprintf(arquivo, "Situação: %s\n\n", alunos[i].situacao);
      }
   }

   fprintf(arquivo, "Total de alunos: %d\n", total);
   fclose(arquivo);
   printf("[ Relatório exportado para arquivo .txt! ]\n\n");
}

//--

void exportarCSV(Aluno alunos[], int total)
{
   FILE *arquivo = fopen("data/alunos.csv", "w");

   if (arquivo == NULL)
   {
      printf("Erro ao criar o arquivo .csv!\n");
      return;
   }

   fprintf(arquivo, "Nome,Matricula,Nota 01,Nota 02,Nota 03,Nota 04,Media,Situação\n");

   for (int i = 0; i < total; i++)
   {
      if (alunos[i].ativo == 1)
      {
         fprintf(arquivo, "%s, %d,%.2lf, %.2lf, %.2lf, %.2lf, %.2lf, %s\n",
                 alunos[i].nome,
                 alunos[i].matricula,
                 alunos[i].nota1,
                 alunos[i].nota2,
                 alunos[i].nota3,
                 alunos[i].nota4,
                 alunos[i].media,
                 alunos[i].situacao);
      }
   }

   fclose(arquivo);
   printf("[ Relatório exportado para arquivo .csv! ]\n\n");
}

//--

void exportarJSON(Aluno alunos[], int total)
{
   FILE *arquivo = fopen("data/alunos.json", "w");

   if (arquivo == NULL)
   {
      printf("Erro ao criar o arquivo .json!\n");
      return;
   }

   fprintf(arquivo, "[\n");

   for (int i = 0; i < total; i++)
   {
      if (alunos[i].ativo == 1)
      {
         fprintf(arquivo, "  {\n");
         fprintf(arquivo, "    \"nome\": \"%s\",\n", alunos[i].nome);
         fprintf(arquivo, "    \"matricula\": %d,\n", alunos[i].matricula);
         fprintf(arquivo, "    \"nota1\": %.2lf,\n", alunos[i].nota1);
         fprintf(arquivo, "    \"nota2\": %.2lf,\n", alunos[i].nota2);
         fprintf(arquivo, "    \"nota3\": %.2lf,\n", alunos[i].nota3);
         fprintf(arquivo, "    \"nota4\": %.2lf,\n", alunos[i].nota4);
         fprintf(arquivo, "    \"media\": %.2lf,\n", alunos[i].media);
         fprintf(arquivo, "    \"situacao\": \"%s\"\n", alunos[i].situacao);

         if (i < total - 1)
         {
            fprintf(arquivo, "},\n");
         }
         else
         {
            fprintf(arquivo, "}\n");
         }
      }
   }

   fprintf(arquivo, "]\n");
   fclose(arquivo);
   printf("[ Relatório exportado para arquivo .json! ]\n\n");
}