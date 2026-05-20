#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int i = 1;

   while (i <= 100)
   {
      printf("%d <<<\n", i);
      i++;
   }

   //--

   int num;

   printf("Digite um número (negativo para sair): \n");
   scanf("%d", &num);

   while (num >= 0)
   {
      printf("Você digitou: %d\n", num);

      printf("Digite um número (negativo para sair): \n");
      scanf("%d", &num);
   }

   printf("Número negativo detectado. Saindo...\n");

   return 0;
}