#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que imprima a diagonal principal de uma matriz 5 x 5;
    */
   int matriz[5][5];

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         matriz[i][j] = rand() % 10;
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

   //- Imprime a diagonal principal

   printf("\n");
   printf("Diagonal principal:\n");

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         if (i == j)
         {
            printf("%d ", matriz[i][j]);
         }
         else
         {
            printf("-");
         }
      }
      printf("\n");
   }
   printf("\n");

   return 0;
}