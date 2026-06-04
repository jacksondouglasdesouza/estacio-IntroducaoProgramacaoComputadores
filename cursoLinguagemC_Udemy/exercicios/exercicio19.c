#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um valor inteiro e imprima a tabuada de multiplicação desse valor, de 1 a 10;
    */

   printf("Digite um valor inteiro: ");
   int valor;
   scanf("%d", &valor);

   printf("Tabuada de multiplicação do valor %d:\n", valor);

   for (int i = 1; i <= 10; i++)
   {
      printf("%d x %d = %d\n", valor, i, valor * i);
   }

   return 0;
}