#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que preencha uma matriz 5 x 10 com inteiros;
    * a) Some cada elemento das linhas e armazene em um vetor;
    * b) Some cada elemento das colunas e armazene em um vetor;
    * c) Imprimir a matriz e os vetores com a soma dos elementos da linha e da coluna.
    */

   int matriz[5][10];
   int vetorLinha[5] = {0};
   int vetorColuna[10] = {0};

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         matriz[i][j] = rand() % 100;
      }
   }

   //--

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         vetorLinha[i] += matriz[i][j];
         vetorColuna[j] += matriz[i][j];
      }
   }

   //--

   printf("Matriz:\n");
   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j < 10; j++)
      {
         printf("%d ", matriz[i][j]);
      }
      printf("\n");
   }

   //--

   printf("Vetor Linha:\n");
   for (int i = 0; i < 5; i++)
   {
      printf("%d ", vetorLinha[i]);
   }

   printf("\n");

   //--

   printf("Vetor Coluna:\n");
   for (int i = 0; i < 10; i++)
   {
      printf("%d ", vetorColuna[i]);
   }

   printf("\n");

   //--

   int somaLinha = 0;
   int somaColuna = 0;

   for (int i = 0; i < 5; i++)
   {
      somaLinha += vetorLinha[i];
   }

   printf("Soma da linha: %d\n", somaLinha);

   for (int i = 0; i < 10; i++)
   {
      somaColuna += vetorColuna[i];
   }

   printf("Soma da coluna: %d\n", somaColuna);

   return 0;
}