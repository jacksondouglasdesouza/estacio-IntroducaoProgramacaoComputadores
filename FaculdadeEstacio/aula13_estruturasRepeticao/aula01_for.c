#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   /*
   int num;
   printf("Digite um número inteiro: ");
   scanf("%d", &num); */

   for (int i = 1; i <= 10; i++)
   {
      if (i % 2 == 0)
      {
         printf("Número: %d\n", i);
      }
   }

   

   return 0;
}