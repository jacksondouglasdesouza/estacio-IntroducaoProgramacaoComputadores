#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Dada duas matrizes A e B, com 3 x 3 posições cada, escreva um programa que calcule a soma das matrizes.
    * e em seguida armazene em outra matriz C;
    */

   int matrizA[3][3];
   int matrizB[3][3];
   int matrizC[3][3];

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         matrizA[i][j] = rand() % 100;
         matrizB[i][j] = rand() % 100;
         matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
      }
   }

   //--

   printf("Matriz A:\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%d ", matrizA[i][j]);
      }
      printf("\n");
   }

   printf("\n");

   printf("Matriz B:\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%d ", matrizB[i][j]);
      }
      printf("\n");
   }

   printf("\n");

   printf("Matriz Soma:\n");
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         printf("%d ", matrizC[i][j]);
      }
      printf("\n");
   }

   return 0;
}