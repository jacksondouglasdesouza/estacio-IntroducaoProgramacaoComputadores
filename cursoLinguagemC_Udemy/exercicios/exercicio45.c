#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que gere 50 números inteiros e os armazene em um vetor de 50 posições.
    * O programa em seguida deve organizar o vetor de 50 posições em ordem crescente.
    */

   int vetor[50];

   for (int i = 0; i < 50; i++)
   {
      vetor[i] = rand() % 100;
   }

   for (int i = 0; i < 50; i++)
   {
      printf("%d ", vetor[i]);
   }

   printf("\n");

   //--

   for (int i = 0; i < 50; i++)
   {
      for (int j = 0; j < 49 - i; j++)
      {
         if (vetor[j] > vetor[j + 1])
         {
            int aux = vetor[j];
            vetor[j] = vetor[j + 1];
            vetor[j + 1] = aux;
         }
      }
   }

   printf("Vetor ordenado em ordem crescente:\n");

   for (int i = 0; i < 50; i++)
   {
      printf("%d ", vetor[i]);
   }

   return 0;
}