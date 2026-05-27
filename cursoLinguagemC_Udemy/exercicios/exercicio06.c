#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Faça um programa que faça conversão cambial entre dolares e reais.
    * Considere USD 1,00 = R$ 5,30
    * Leia um valor em reais e apresente-o convertido em dolares.
    */

   float real, dolar = 5.30;

   printf("Digite o valor que quer converter: R$ ");
   scanf("%f", &real);

   float conversao = real / dolar;

   printf("O valor em dolares é: $ %.2f", conversao);

   return 0;
}