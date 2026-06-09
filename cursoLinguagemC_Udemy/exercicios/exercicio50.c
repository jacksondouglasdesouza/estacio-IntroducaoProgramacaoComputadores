#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que imprima a diagonal secundaria de uma matriz 7 x 7;
    */

   int matriz[7][7];

   for (int i = 0; i < 7; i++)
   {
      for (int j = 0; j < 7; j++)
      {
         matriz[i][j] = rand() % 10;
      }
   }

   //--

   printf("Matriz:\n");

   printf("\n");

   for (int i = 0; i < 7; i++)
   {
      for (int j = 0; j < 7; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   //--

   printf("\n");
   printf("Diagonal secundaria:\n");

   for (int i = 0; i < 7; i++)
   {
      for (int j = 0; j < 7; j++)
      {
         if (i + j == 6)
         {
            printf("%d ", matriz[i][j]);
         }
         else
         {
            printf("- ");
         }
      }
      printf("\n");
   }

   printf("\n");

   return 0;
}