#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 5
#define COLUNAS 5

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //--

   int matriz[LINHAS][COLUNAS] = {
       {1, 2, 3, 4, 5},
       {6, 7, 8, 9, 10},
       {11, 12, 13, 14, 15},
       {16, 17, 18, 19, 20},
       {21, 22, 23, 24, 25}};

   int target = 233;
   int found = 0;

   for (int i = 0; i < LINHAS; i++)
   {
      for (int j = 0; j < COLUNAS; j++)
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