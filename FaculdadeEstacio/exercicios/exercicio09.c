#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

   setlocale(LC_ALL, "Portuguese");

   int i = 0;

   while (i <= 10)
   {
      if (i % 2 == 0)
      {
         printf("Número par: %d\n", i);
      }
      i++;
   }

   int j = 0;

   printf("\n\n");

   while (j <= 10) {
      if (j % 2 != 0) {
         printf("Número Ímpar: %d\n", j);
      }
      j++;
   }

   return 0;
}