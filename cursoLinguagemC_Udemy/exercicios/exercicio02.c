#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Troque o valor de duas variáveis.

   int value_01, value_02, auxiliar;

   printf("Digite o primeiro valor: ");
   scanf("%d", &value_01);

   printf("Digite o segundo valor: ");
   scanf("%d", &value_02);

   printf("\n");

   auxiliar = value_01;
   value_01 = value_02;
   value_02 = auxiliar;

   printf("O primeiro valor agora é: %d\n", value_01);
   printf("O segundo valor agora é: %d\n", value_02);

   return 0;
}