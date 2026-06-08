#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   /*
    * Escreva um programa que leia um vetor N de 20 posições;
    * Em seguida, troque o 1 elemento com o último.
    * Troque o 2 elemento com o penúltimo.
    * até que 10 com 11.
    * Imprima o vetor N de 20 posições modificados.
    */

   int N[20] = {
       10, 20, 30, 40, 50, 60, 70, 80, 90, 100, 110, 120, 130, 140, 150, 160, 170, 180, 190, 200};

   for (int i = 0; i < 20; i++)
   {
      printf("N[%d] = %d\n", i + 1, N[i]);
   }

   //--

   for (int i = 0; i < 10; i++)
   {
      int aux = N[i];
      N[i] = N[19 - i];
      N[19 - i] = aux;
   }

   printf("\n");

   for (int i = 0; i < 20; i++)
   {
      printf("N[%d] = %d\n", i + 1, N[i]);
   }

   return 0;
}