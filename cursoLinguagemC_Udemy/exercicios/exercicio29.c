#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Para uma turma de 45 alunos:
    * Construa um programa que determine;
    * a) A idade média dos alunos com menos de 1,70m de altura;
    * b) A altura média dos alunos com mais de 20 anos;
    */

   srand(time(NULL));

   int idade[50];
   double altura[50];

   for (int i = 0; i < 45; i++)
   {
      idade[i] = rand() % 39 + 12;
      altura[i] = (rand() % 61) / 100.0 + 1.5;
   }

   int somaIdade = 0, qtdAlunosMenos170 = 0, qtdAlunosMaior20 = 0;
   double somaAltura = 0.0;

   for (int i = 0; i < 45; i++)
   {
      if (altura[i] < 1.70)
      {
         somaIdade += idade[i];
         qtdAlunosMenos170++;
      }

      if (idade[i] > 20)
      {
         somaAltura += altura[i];
         qtdAlunosMaior20++;
      }
   }

   double idadeMedia = 0.0;
   if (qtdAlunosMenos170 > 0)
   {
      idadeMedia = (double)somaIdade / qtdAlunosMenos170;
   }

   double alturaMedia = 0.0;
   if (qtdAlunosMaior20 > 0)
   {
      alturaMedia = (double)somaAltura / qtdAlunosMaior20;
   }

   printf("Idade média dos alunos com menos de 1,70m: %.2f\n", idadeMedia);
   printf("Altura média dos alunos com mais de 20 anos: %.2f\n", alturaMedia);

   return 0;
}