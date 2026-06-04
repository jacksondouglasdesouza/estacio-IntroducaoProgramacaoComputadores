#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um valor N;
    * Apresente o quadrado de cada valor par de 1 até N;
    */

   int n;

   printf("Digite um valor: ");
   scanf("%d", &n);

   for (int i = 1; i <= n; i++)
   {
      if (i % 2 == 0)
      {
         printf("%d ", i * i);
      }
   }

   return 0;
}