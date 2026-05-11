#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // - Operadores
   // - % Resto da divisão
   // - ++ Incremento
   // - -- Decremento

   int num1, num2, num3;

   printf("Digite um número: ");
   scanf("%d", &num1);

   printf("Digite outro número: ");
   scanf("%d", &num2);

   num3 = num1 % num2; // Resto da divisão entre num1 e num2

   printf("O resultado do resto da divisão é: %d\n", num3);

   //-- INCREMENTO ++

   printf("%d\n", num1); // Imprime o valor atual de num1
   num1++;               // Incrementa num1 em 1 (num1 = num1 + 1)
   printf("O valor de num1 após o incremento é: %d\n", num1);

   //-- DECREMENTO --
   printf("%d\n", num2); // Imprime o valor atual de num2
   num2--;               // Decrementa num2 em 1 (num2 = num2 - 1)
   printf("O valor de num2 após o decremento é: %d\n", num2);

   return 0;
}