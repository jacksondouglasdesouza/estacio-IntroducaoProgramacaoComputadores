#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int numero;

   printf("Digite um numero: ");
   scanf("%d", &numero);

   if (numero > 0) {
      if (numero % 2 == 0) {
         printf("O numero é par.\n");
      } else {
         printf("O numero é impar.\n");
      }

   } else if (numero == 0) {
      printf("O número é zero.\n");
   } else {
      printf("Número é negativo.\n");
   }

   return 0;
}