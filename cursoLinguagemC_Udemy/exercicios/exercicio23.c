#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que imprima todos os multiplos de 7 entre 1 e 9999;
    */

   printf("Multiplos de 7 entre 1 e 9999:\n");

   for (int i = 0; i <= 9999; i++)
   {
      if (i % 7 == 0)
      {
         printf("%d ", i);
      }
   }

   return 0;
}