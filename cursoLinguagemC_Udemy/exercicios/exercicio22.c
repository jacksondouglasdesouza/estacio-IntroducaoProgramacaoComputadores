#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia 2 notas do aluno;
    * O programa deve verificar se as notas são válidas no intervalo entre 0 à 10;
    * O programa deve calcular a média do aluno;
    * Cada nota deve ser validade separadamente, ou seja, se a primeira nota for inválida, o programa deve solicitar a entrada da primeira nota novamente, e assim por diante;
    */

   float nota01 = 0, nota02 = 0, media = 0;

   printf("PROGRAMA DE CÁLCULO DE MÉDIA\n");

   printf("Digite sua primeira nota: ");
   scanf("%f", &nota01);

   while (nota01 < 0 || nota01 > 10)
   {
      printf("Nota inválida! | Digite sua primeira nota: ");
      scanf("%f", &nota01);
   }

   printf("Digite sua segunda nota: ");
   scanf("%f", &nota02);

   while (nota02 < 0 || nota02 > 10)
   {
      printf("Nota inválida! | Digite sua segunda nota: ");
      scanf("%f", &nota02);
   }

   media = (nota01 + nota02) / 2;
   printf("A sua média é: %.2f", media);

   return 0;
}