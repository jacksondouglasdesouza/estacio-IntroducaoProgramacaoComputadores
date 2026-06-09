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
   novo.ativo = 1;

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
      if (alunos[i].ativo == 1)
      {
         printf("\n--- Aluno %d ---\n", i + 1);
         printf("Nome: %s\n", alunos[i].nome);
         printf("Matricula: %d\n", alunos[i].matricula);
         printf("Media: %.2lf\n", alunos[i].media);
         printf("Situação: %s\n", alunos[i].situacao);
      }
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
         if (alunos[i].matricula == matricula && alunos[i].ativo == 1)
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
         if (strcmp(alunos[i].nome, nome) == 0 && alunos[i].ativo == 1)
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

//--

void editarAluno(Aluno alunos[], int total)
{

   if (total == 0)
   {
      printf("Nenhum aluno cadastrado até o momento!\n");
      return;
   }

   int opcao;

   printf("\n--- Buscar aluno para editar ---\n");
   printf("1. Editar por matrícula\n");
   printf("2. Editar por nome\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   while (opcao < 1 || opcao > 2)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1. Editar por matrícula\n");
      printf("2. Editar por nome\n");
      printf("Opção: ");
      scanf("%d", &opcao);
   }

   int indice = -1;

   if (opcao == 1)
   {

      int matricula;

      printf("Digite a matrícula: ");
      scanf("%d", &matricula);

      for (int i = 0; i < total; i++)
      {
         if (alunos[i].matricula == matricula && alunos[i].ativo == 1)
         {
            indice = i;
            break;
         }
      }
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
         if (strcmp(alunos[i].nome, nome) == 0 && alunos[i].ativo == 1)
         {
            indice = i;
            break;
         }
      }
   }

   if (indice == -1)
   {
      printf("\n    --- Aluno não encontrado ---\n");
      return;
   }

   //--

   printf("\n--- Dados atuais do aluno ---\n");
   printf("1) Nome: %s\n", alunos[indice].nome);
   printf("2) Nota 01: %.2lf\n", alunos[indice].nota1);
   printf("3) Nota 02: %.2lf\n", alunos[indice].nota2);
   printf("4) Nota 03: %.2lf\n", alunos[indice].nota3);
   printf("5) Nota 04: %.2lf\n", alunos[indice].nota4);
   printf("6) Editar tudo?\n");
   printf("0) Cancelar Edição\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   while (opcao < 0 || opcao > 6)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1) Nome: %s\n", alunos[indice].nome);
      printf("2) Nota 01: %.2lf\n", alunos[indice].nota1);
      printf("3) Nota 02: %.2lf\n", alunos[indice].nota2);
      printf("4) Nota 03: %.2lf\n", alunos[indice].nota3);
      printf("5) Nota 04: %.2lf\n", alunos[indice].nota4);
      printf("6) Editar tudo?\n");
      printf("0) Cancelar Edição\n");
      printf("Opção: ");
      scanf("%d", &opcao);
   }

   switch (opcao)
   {
   case 1:
      printf("Digite o novo nome: ");
      while (getchar() != '\n')
         ;
      fgets(alunos[indice].nome, 100, stdin);
      alunos[indice].nome[strcspn(alunos[indice].nome, "\n")] = 0;
      break;

   case 2:
      do
      {
         printf("Digite a nova nota 01: ");
         scanf("%lf", &alunos[indice].nota1);
         if (alunos[indice].nota1 < 0 || alunos[indice].nota1 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota1 < 0 || alunos[indice].nota1 > 10);
      break;

   case 3:
      do
      {
         printf("Digite a nova nota 02: ");
         scanf("%lf", &alunos[indice].nota2);
         if (alunos[indice].nota2 < 0 || alunos[indice].nota2 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota2 < 0 || alunos[indice].nota2 > 10);
      break;

   case 4:
      do
      {
         printf("Digite a nova nota 03: ");
         scanf("%lf", &alunos[indice].nota3);
         if (alunos[indice].nota3 < 0 || alunos[indice].nota3 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota3 < 0 || alunos[indice].nota3 > 10);
      break;

   case 5:
      do
      {
         printf("Digite a nova nota 04: ");
         scanf("%lf", &alunos[indice].nota4);
         if (alunos[indice].nota4 < 0 || alunos[indice].nota4 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota4 < 0 || alunos[indice].nota4 > 10);
      break;

   case 6:

      printf("Digite o novo nome: ");
      while (getchar() != '\n')
         ;
      fgets(alunos[indice].nome, 100, stdin);
      alunos[indice].nome[strcspn(alunos[indice].nome, "\n")] = 0;

      do
      {
         printf("Digite a nova nota 01: ");
         scanf("%lf", &alunos[indice].nota1);
         if (alunos[indice].nota1 < 0 || alunos[indice].nota1 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota1 < 0 || alunos[indice].nota1 > 10);

      do
      {
         printf("Digite a nova nota 02: ");
         scanf("%lf", &alunos[indice].nota2);
         if (alunos[indice].nota2 < 0 || alunos[indice].nota2 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota2 < 0 || alunos[indice].nota2 > 10);

      do
      {
         printf("Digite a nova nota 03: ");
         scanf("%lf", &alunos[indice].nota3);
         if (alunos[indice].nota3 < 0 || alunos[indice].nota3 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota3 < 0 || alunos[indice].nota3 > 10);

      do
      {
         printf("Digite a nova nota 04: ");
         scanf("%lf", &alunos[indice].nota4);
         if (alunos[indice].nota4 < 0 || alunos[indice].nota4 > 10)
         {
            printf("Nota Inválida! Digite uma nota entre 0 e 10.\n");
         }
      } while (alunos[indice].nota4 < 0 || alunos[indice].nota4 > 10);
      break;

   case 0:
      printf("[ EDIÇÃO CANCELADA! ]\n");
      return;
   }

   //--

   alunos[indice].media = (alunos[indice].nota1 + alunos[indice].nota2 + alunos[indice].nota3 + alunos[indice].nota4) / 4;
   strcpy(alunos[indice].situacao, alunos[indice].media >= 6.0 ? "Aprovado" : "Reprovado");

   printf("\n[ Aluno editado com sucesso! ]\n");
   return;
}

//--

void removerAluno(Aluno alunos[], int total)
{
   if (total == 0)
   {
      printf("Nenhum aluno cadastrado até o momento!\n");
      return;
   }

   int opcao;

   printf("\n--- Buscar aluno para remover ---\n");
   printf("1. Remover por matrícula\n");
   printf("2. Remover por nome\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   while (opcao < 1 || opcao > 2)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1. Remover por matrícula\n");
      printf("2. Remover por nome\n");
      printf("Opção: ");
      scanf("%d", &opcao);
   }

   int indice = -1;

   if (opcao == 1)
   {

      int matricula;

      printf("Digite a matrícula: ");
      scanf("%d", &matricula);

      for (int i = 0; i < total; i++)
      {
         if (alunos[i].matricula == matricula && alunos[i].ativo == 1)
         {
            indice = i;
            break;
         }
      }
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
         if (strcmp(alunos[i].nome, nome) == 0 && alunos[i].ativo == 1)
         {
            indice = i;
            break;
         }
      }
   }

   if (indice == -1)
   {
      printf("\n    --- Aluno não encontrado ---\n");
      return;
   }

   printf("\n--- Aluno Encontrado ---\n");
   printf("Nome: %s\n", alunos[indice].nome);
   printf("Matricula: %d\n", alunos[indice].matricula);
   printf("Media: %.2lf\n", alunos[indice].media);
   printf("Situação: %s\n", alunos[indice].situacao);

   int confirmacao;

   printf("\n--- Deseja realmente remover o aluno? ---\n");
   printf("1) Sim\n");
   printf("2) Não\n");
   printf("Opção: ");
   scanf("%d", &confirmacao);

   while (confirmacao < 1 || confirmacao > 2)
   {
      printf("[ Opção Inválida! Escolha uma opção válida. ]\n");
      printf("1) Sim\n");
      printf("2) Não\n");
      printf("Opção: ");
      scanf("%d", &confirmacao);
   }

   if (confirmacao == 1)
   {
      alunos[indice].ativo = 0;
      printf("\n[ Aluno removido com sucesso! ]\n");
   }
   else
   {
      printf("A remoção foi cancelada.\n");
   }
}

//--
