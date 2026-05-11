#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int numero01, numero02, numero03, soma, media;

   printf("Digite o primeiro número: ");
   scanf("%d", &numero01);

   printf("Digite o segundo número: ");
   scanf("%d", &numero02);

   printf("Digite o terceiro número: ");
   scanf("%d", &numero03);

   soma = numero01 + numero02 + numero03;
   media = soma / 3;

   printf("A soma dos números é: %d\n", soma);
   printf("A média dos números é de: %d\n", media);

   return 0;
}