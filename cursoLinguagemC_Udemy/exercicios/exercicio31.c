#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que encontre o menor número inteiro divisível por 1 a 10;
    */

   int numero = 1, flagLoop = 0;

   while (flagLoop == 0)
   {

      int flagEncontrouNumero = 1;

      for (int i = 1; i <= 10; i++)
      {

         if (numero % i != 0)
         {
            flagEncontrouNumero = 0;
            break;
         }
      }

      if (flagEncontrouNumero == 1)
      {
         flagLoop = 1;
         printf("O menor número inteiro divisível por 1 a 10: %d\n", numero);
      }
      else
      {
         numero++;
      }
   }

   return 0;
}