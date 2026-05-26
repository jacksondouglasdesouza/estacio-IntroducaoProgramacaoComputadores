#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int nun, ind, soma = 0;

   for (ind = 1; ind <= 5; ind++)
   {

      scanf("%d", &nun);

      if (nun % 2 == 0)
      {
         soma = soma + nun;
      }
   }

   printf("* %d\n", soma);

   return 0;
}