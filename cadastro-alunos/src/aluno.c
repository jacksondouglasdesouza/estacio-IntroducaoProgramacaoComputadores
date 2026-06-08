#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/aluno.h"

void cadastrarAluno(Aluno alunos[], int *total)
{
   if (*total >= MAX_ALUNOS)
   {
      printf("Limite de alunos atingido!\n");
      return;
   }

   Aluno novo;

   novo.matricula = *total + 1;

   printf("Nome: ");
   while (getchar() != '\n')
      ;
   fgets(novo.nome, 100, stdin);
   novo.nome[strcspn(novo.nome, "\n")] = 0;

   do
   {
      printf("Nota 01: ");
      scanf("%lf", &novo.nota1);
      if (novo.nota1 < 0 || novo.nota1 > 10)
      {
         printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
      }
   } while (novo.nota1 < 0 || novo.nota1 > 10);

   do
   {
      printf("Nota 02: ");
      scanf("%lf", &novo.nota2);
      if (novo.nota2 < 0 || novo.nota2 > 10)
      {
         printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
      }
   } while (novo.nota2 < 0 || novo.nota2 > 10);

   do
   {
      printf("Nota 03: ");
      scanf("%lf", &novo.nota3);
      if (novo.nota3 < 0 || novo.nota3 > 10)
      {
         printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
      }
   } while (novo.nota3 < 0 || novo.nota3 > 10);

   do
   {
      printf("Nota 04: ");
      scanf("%lf", &novo.nota4);
      if (novo.nota4 < 0 || novo.nota4 > 10)
      {
         printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
      }
   } while (novo.nota4 < 0 || novo.nota4 > 10);

   novo.media = (novo.nota1 + novo.nota2 + novo.nota3 + novo.nota4) / 4;
   strcpy(novo.situacao, novo.media >= 6.0 ? "Aprovado" : "Reprovado");

   alunos[*total] = novo;
   (*total)++;

   printf("\n[ Aluno cadastrado com sucesso! ]\n");
}

//--

void listarAlunos(Aluno alunos[], int total)
{
   if (total == 0)
   {
      printf("Nenhum aluno cadastrado até o momento!\n");
      return;
   }

   for (int i = 0; i < total; i++)
   {
      printf("\n--- Aluno %d ---\n", i + 1);
      printf("Nome: %s\n", alunos[i].nome);
      printf("Matricula: %d\n", alunos[i].matricula);
      printf("Media: %.2lf\n", alunos[i].media);
      printf("Situação: %s\n", alunos[i].situacao);
   }
}

//--

void buscarAluno(Aluno alunos[], int total)
{
   if (total == 0)
   {
      printf("Nenhum aluno cadastrado até o momento!\n");
      return;
   }

   int opcao;

   printf("\n--- Escolha uma opção ---\n");
   printf("1. Buscar por matrícula\n");
   printf("2. Buscar por nome\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   while (opcao < 1 || opcao > 2)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1. Buscar por matrícula\n");
      printf("2. Buscar por nome\n");
      printf("Opção: ");
      scanf("%d", &opcao);
   }

   //--

   if (opcao == 1)
   {
      int matricula;
      printf("Digite a matrícula: ");
      scanf("%d", &matricula);

      for (int i = 0; i < total; i++)
      {
         if (alunos[i].matricula == matricula)
         {

            printf("\n    --- Aluno encontrado ---\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matricula: %d\n", alunos[i].matricula);
            printf("Media: %.2lf\n", alunos[i].media);
            printf("Situação: %s\n", alunos[i].situacao);
            return;
         }
      }
      printf("\n    --- Aluno não encontrado ---\n");
      return;
   }
   else if (opcao == 2)
   {
      char nome[100];
      printf("Digite o nome: ");
      while (getchar() != '\n')
         ;
      fgets(nome, 100, stdin);
      nome[strcspn(nome, "\n")] = 0;

      for (int i = 0; i < total; i++)
      {
         if (strcmp(alunos[i].nome, nome) == 0)
         {
            printf("\n    --- Aluno encontrado ---\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Matricula: %d\n", alunos[i].matricula);
            printf("Media: %.2lf\n", alunos[i].media);
            printf("Situação: %s\n", alunos[i].situacao);
            return;
         }
      }
      printf("\n    --- Aluno não encontrado ---\n");
      return;
   }
}
