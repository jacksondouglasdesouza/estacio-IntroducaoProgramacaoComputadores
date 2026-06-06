#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "aluno.h"
#include "arquivo.h"

void cadastrarAluno(Aluno alunos[], int *total);
void listarAlunos(Aluno alunos[], int total);
void salvarAlunos(Aluno alunos[], int total);
void carregarAlunos(Aluno alunos[], int *total);

int main()
{
   setlocale(LC_ALL, "Portuguese");

   Aluno alunos[MAX_ALUNOS];
   int total = 0;
   int opcao;
   carregarAlunos(alunos, &total);

   do
   {
      printf("\n=== SISTEMA DE CADASTRO DE ALUNOS ===\n");
      printf("1 - Cadastrar aluno\n");
      printf("2 - Listar alunos\n");
      printf("3 - Salvar alunos\n");
      printf("0 - Sair\n");
      printf("Opçao: ");
      scanf("%d", &opcao);

      switch (opcao)
      {
      case 1:
         cadastrarAluno(alunos, &total);
         break;
      case 2:
         listarAlunos(alunos, total);
         break;
      case 3:
         salvarAlunos(alunos, total);
         break;
      case 0:
         printf("[ Encerrando programa! ]");
         break;
      default:
         printf("Opção Inválida!");
      }

   } while (opcao != 0);

   return 0;
}