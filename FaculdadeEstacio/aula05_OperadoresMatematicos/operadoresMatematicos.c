#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //-- Operadores Matemáticos
   // + Adição
   // - Subtração
   // * Multiplicação
   // / Divisão
   // % Resto da Divisão
   // ++ Incremento
   // -- Decremento
   // += Atribuição de Adição
   // -= Atribuição de Subtração
   // *= Atribuição de Multiplicação
   // /= Atribuição de Divisão
   // %= Atribuição de Resto da Divisão

   int numero1, numero2;

   printf("Digite o primeiro número: ");
   scanf("%d", &numero1);
   printf("Digite o segundo número: ");
   scanf("%d", &numero2);

   int soma = numero1 + numero2;
   int subtracao = numero1 - numero2;
   float multiplicacao = numero1 * numero2;
   float divisao = (float)numero1 / numero2;
   int restoDivisao = numero1 % numero2;

   printf("Soma: %d\n", soma);
   printf("Subtração: %d\n", subtracao);
   printf("Multiplicação: %.2f\n", multiplicacao);
   printf("Divisão: %.2f\n", divisao);
   printf("Resto da Divisão: %d\n", restoDivisao);

   soma += 20;
   subtracao -= 5;
   multiplicacao *= 5;
   divisao /= 2;
   restoDivisao %= 3;

   printf("\nSoma: %d\n", soma);
   printf("Subtração: %d\n", subtracao);
   printf("Multiplicação: %.2f\n", multiplicacao);
   printf("Divisão: %.2f\n", divisao);
   printf("Resto da Divisão: %d\n\n", restoDivisao);

   //-- Pós-incremento e Pós-decremento

   soma++;
   subtracao--;
   multiplicacao++;
   divisao--;
   restoDivisao++;

   /*
    *Pré incremento e Pré decremento
    *++soma;
    *--subtracao;
    *++multiplicacao;
    *--divisao;
    *++restoDivisao;
    */

   printf("Soma: %d\n", soma);
   printf("Subtração: %d\n", subtracao);
   printf("Multiplicação: %.2f\n", multiplicacao);
   printf("Divisão: %.2f\n", divisao);
   printf("Resto da Divisão: %d\n\n", restoDivisao);

   return 0;
}