#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Escreva um programa que leia um //valor de despesa de um restaurante,
    * o //valor da gorjeta e o //número de pessoas que vão dividir a conta.
    * Calcule e exiba o valor de cada pessoa o valor igualmente dividido.
    */

   float despesa, gorjeta, pessoas, valuePessoa;

   printf("Digite o valor da despesa R$: ");
   scanf("%f", &despesa);

   printf("Digite o valor da gorjeta %%: ");
   scanf("%f", &gorjeta);

   printf("Digite o numero de pessoas: ");
   scanf("%f", &pessoas);

   valuePessoa = (despesa + (despesa * gorjeta / 100)) / pessoas;

   printf("O valor total da despesa é R$: %.2f\n", (despesa + (despesa * gorjeta / 100)));
   printf("O valor individual de cada pessoa é R$: %.2f", valuePessoa);
   return 0;
}