#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
      Leia dois valores X e Y e mostre a sequência de 1 até Y com X números por linha.
      Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequência de 1 até Y, passando para a próxima linha a cada X números.
      Exemplo de entrada:
      3 99

      Exemplo de saída:
      1 2 3
      4 5 6
      7 8 9
      10 11 12
      ...
      97 98 99
   */

   int x, y;

   printf("Digite o valor de X: ");
   scanf("%d", &x);
   printf("Digite o valor de Y: ");
   scanf("%d", &y);

   for (int i = 1; i <= y; i++)
   {
      printf("%d ", i);
      if (i % x == 0)
      {
         printf("\n");
      }
   }

   return 0;
}