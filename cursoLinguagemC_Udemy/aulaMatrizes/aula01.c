#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   srand(time(NULL));

   //-- Aula 01 - Matriz - Array Bidimensionais --//

   int matriz01[5][5];

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         matriz01[i][j] = rand() % 1000;
      }
   }

   printf("\nMatriz 01:\n");

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 5; j++)
      {
         printf("%d ", matriz01[i][j]);
      }
      printf("\n");
   }

   //--

   int x, y;

   printf("\nMatriz 02:\n");
   printf("Digite o numero de linhas e colunas da matriz que deseja gerar: ");
   scanf("%d %d", &x, &y);

   int matriz02[x][y];

   for (int i = 0; i < x; i++)
   {
      for (int j = 0; j < y; j++)
      {
         matriz02[i][j] = rand() % 1000;
      }
   }

   printf("\n");

   for (int i = 0; i < x; i++)
   {
      for (int j = 0; j < y; j++)
      {
         printf("%d ", matriz02[i][j]);
      }
      printf("\n\n");
   }

   return 0;
}