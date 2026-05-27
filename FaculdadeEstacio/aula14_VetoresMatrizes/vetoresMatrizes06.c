#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int matriz[3][3] = {
       {1, 2, 3},
       {4, 5, 6},
       {7, 8, 9}};

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (matriz[i][j] > 5)
         {
            matriz[i][j] = -matriz[i][j];
         }

         printf("[ %d ]", matriz[i][j]);
      }

      printf("\n");
   }

   //--

   int pares = 0;
   int impares = 0;

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (matriz[i][j] % 2 == 0)
         {
            pares++;
         }
         else
         {
            impares++;
         }
      }
   }

   printf("\nPares: %d\nImpares: %d\n", pares, impares);
   printf("\n");

   //--

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (matriz[i][j] % 3 == 0)
         {
            matriz[i][j] = -11;
         }
         printf("[ %d ]", matriz[i][j]);
      }

      printf("\n");
   }

   printf("\n");

   //--

   int target = -77;
   int found = 0;

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         if (matriz[i][j] == target)
         {
            printf("Elemento [ %d ] encontrado na posicao [ %d ][ %d ]\n", target, i, j);
            found = 1;
            break;
         }
      }

      if (found)
      {
         break;
      }
   }

   if (!found)
   {
      printf("Elemento [ %d ] nao encontrado\n", target);
   }

   printf("\n");

   return 0;
}