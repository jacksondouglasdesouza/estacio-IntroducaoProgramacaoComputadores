#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int idade;
   float peso, altura;

   printf("Digite sua idade, peso e altura: ");
   scanf("%d%f%f", &idade, &peso, &altura);

   printf("A sua idade é: %d, o seu peso é: %.2f e a sua altura é: %.2f\n", idade, peso, altura);
   printf("A sua idade é: %d, o seu peso é: %f e a sua altura é: %f\n", idade, peso, altura);

   return 0;
}