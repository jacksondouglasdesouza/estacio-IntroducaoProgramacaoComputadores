#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que some os números impares de 1 a 100 e mostre o resultado.
    */

   int soma = 0;

   for (int i = 1; i <= 1000; i++)
   {
      if (i % 2 != 0)
      {
         soma += i;
      }
   }

   printf("A soma dos números impares de 1 a 1000 é: %d\n", soma);

   return 0;
}