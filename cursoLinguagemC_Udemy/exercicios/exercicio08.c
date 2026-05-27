#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que gere um, triângulo de asterisco com espaços a esquerda.
    */

   for (int i = 0; i < 5; i++)
   {
      for (int j = 0; j <= i; j++)
      {
         printf("*");
      }
      printf("\n");
   }

   return 0;
}