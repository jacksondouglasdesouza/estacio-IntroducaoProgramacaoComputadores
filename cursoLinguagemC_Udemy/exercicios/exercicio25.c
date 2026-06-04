#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa calculadora com as 4 operações básicas;
    *  + - * /
    * use a estrutura switch case para escolher a operação;
    */

   float valor1, valor2;
   char operador;

   printf("Digite o primeiro número: ");
   scanf("%f", &valor1);
   printf("Digite o segundo número: ");
   scanf("%f", &valor2);
   printf("Escolha a operação [ + | - | * | / ]\n: ");
   scanf(" %c", &operador);

   switch (operador)
   {
   case '+':
      printf("Resultado: %.2f\n", valor1 + valor2);
      break;
   case '-':
      printf("Resultado: %.2f\n", valor1 - valor2);
      break;
   case '*':
      printf("Resultado: %.2f\n", valor1 * valor2);
      break;
   case '/':
      if (valor2 != 0)
      {
         printf("Resultado: %.2f\n", valor1 / valor2);
      }
      else
      {
         printf("Erro: Divisão por zero não é permitida.\n");
      }
      break;
   default:
      printf("Operação inválida. Por favor, escolha entre [ + | - | * | / ]\n");
   }

   return 0;
}