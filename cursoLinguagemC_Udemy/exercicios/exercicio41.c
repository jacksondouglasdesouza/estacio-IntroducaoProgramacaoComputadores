#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /*
    * Escreva um programa que some o conteúdo de dois vetores de 25 posições,
    * armazenando o resultado em um terceiro vetor de 25 posições.
    * Imprima os três vetores de 25 posições na tela.
    */

   int vetor1[25];
   int vetor2[25];
   int vetor3[25];

   for (int i = 0; i < 25; i++)
   {
      vetor1[i] = rand() % 100;
      vetor2[i] = rand() % 100;
      vetor3[i] = vetor1[i] + vetor2[i];
   }
   printf("\n");

   for (int i = 0; i < 25; i++)
   {
      printf("vetor1[%d] = %d\n", i + 1, vetor1[i]);
      printf("vetor2[%d] = %d\n", i + 1, vetor2[i]);
      printf("vetor3[%d] = %d\n", i + 1, vetor3[i]);
      printf("\n");
   }

   return 0;
}