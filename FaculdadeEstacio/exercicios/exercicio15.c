#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int index;
   char *nomesAlunos[][3] = {
       {"Aluno 00 - João", "Pt: 30", "Mat: 90"},
       {"Aluno 01 - Paulo", "Pt: 40", "Mat: 70"},
       {"Aluno 02 - Maria", "Pt: 50", "Mat: 60"},
       {"Aluno 03 - Joaquim", "Pt: 60", "Mat: 50"},
       {"Aluno 04 - Joana", "Pt: 70", "Mat: 40"}};

   printf("Digite o número do aluno [0-4] que deseja ver as notas...\n");
   scanf("%d", &index);

   /* printf("A nota do aluno é: %s | %s | %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]); */

   if (index >= 0 && index <= 4)
   {
      printf("A nota do aluno é: %s | %s | %s\n", nomesAlunos[index][0], nomesAlunos[index][1], nomesAlunos[index][2]);
   }
   else
   {
      printf("Opção inválida! Aluno não encontrado.\n");
   }

   return 0;
}