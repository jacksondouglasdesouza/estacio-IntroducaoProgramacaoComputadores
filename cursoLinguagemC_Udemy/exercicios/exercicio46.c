#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que preencha e calcule todos os elementos de uma matriz de 5x5 e mostre o resultado.
    */

   int matriz[5][5];

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         matriz[i][j] = rand() % 100;
      }
   }

   //--

   printf("Matriz:\n");

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   //--

   int somaMatriz = 0;

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         somaMatriz += matriz[i][j];
      }
   }

   //--

   printf("Soma da matriz: %d\n", somaMatriz);

   return 0;
}