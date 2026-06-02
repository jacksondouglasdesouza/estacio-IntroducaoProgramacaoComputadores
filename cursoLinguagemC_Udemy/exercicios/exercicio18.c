#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia 3 valores de entrada;
    * Em seguida verifique se os 3 valores formam um triângulo, ou seja, se a soma de dois lados é maior que o terceiro lado;
    * Exiba uma mensagem informando se os 3 valores formam um triângulo ou não.
    * O programa deve informar se o triângulo é equilátero (todos os lados iguais), isósceles (dois lados iguais) ou escaleno (todos os lados diferentes).
    * Caso negativo, exiba uma mensagem informando que os 3 valores não formam um triângulo.
    */

   float lado1, lado2, lado3;

   printf("Digite o primeiro lado: ");
   scanf("%f", &lado1);
   printf("Digite o segundo lado: ");
   scanf("%f", &lado2);
   printf("Digite o terceiro lado: ");
   scanf("%f", &lado3);

   if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1)
   {
      if (lado1 == lado2 && lado2 == lado3)
      {
         printf("O triângulo é equilátero.\n");
      }
      else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3)
      {
         printf("O triângulo é isósceles.\n");
      }
      else
      {
         printf("O triângulo é escaleno.\n");
      }
   }
   else
   {
      printf("Os 3 valores não formam um triângulo.\n");
   }

   return 0;
}