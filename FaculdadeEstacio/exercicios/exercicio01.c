#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //--

   int idadeAluno, matriculaAluno;
   float alturaAluno;
   char nomeAluno[50];

   printf("Digite a sua idade: ");
   scanf("%d", &idadeAluno);

   printf("Digite a sua altura: ");
   scanf("%f", &alturaAluno);

   printf("Digite o seu nome: ");
   scanf("%s", nomeAluno);

   printf("Digite sua matrícula: ");
   scanf("%d", &matriculaAluno);

   //--

   printf("\n\nDados do aluno:\n");

   printf("Nome do aluno: %s | Matrícula Nº %d\n", nomeAluno, matriculaAluno);
   printf("Idade: %d anos\n", idadeAluno);
   printf("Altura: %.2f m\n", alturaAluno);

   return 0;
}