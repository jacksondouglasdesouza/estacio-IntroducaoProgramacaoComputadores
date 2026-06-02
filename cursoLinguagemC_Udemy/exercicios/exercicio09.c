#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que encontre o maior e menor valor entre 3 números digitados pelo usuário.
    */

   int value1, value2, value3;

   printf("Digite o primeiro valor: ");
   scanf("%d", &value1);

   printf("Digite o segundo valor: ");
   scanf("%d", &value2);

   printf("Digite o terceiro valor: ");
   scanf("%d", &value3);

   int max = value1;
   int min = value1;

   if (value2 > max)
   {
      max = value2;
   }

   if (value3 > max)
   {
      max = value3;
   }

   if (value2 < min)
   {
      min = value2;
   }

   if (value3 < min)
   {
      min = value3;
   }

   printf("Maior valor: %d\n", max);
   printf("Menor valor: %d\n", min);

   return 0;
}