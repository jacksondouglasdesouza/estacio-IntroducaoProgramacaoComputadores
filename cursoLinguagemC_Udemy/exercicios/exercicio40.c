#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   /*
    * Escreva um programa que peça 10 valores inteiros para um usuário;
    * Acumule os valores dentro de um vetor de 10 posições;
    * Calcule o quadrado de cada valor e armazene o resultado em um vetor de 10 posições;
    * Imprima o vetor de 10 posições com o quadrado de cada valor.
    */

   int valoresEntrada[10];
   int valoresQuadrados[10];

   for (int i = 0; i < 10; i++)
   {
      printf("Digite um valor inteiro: ");
      scanf("%d", &valoresEntrada[i]);
      valoresQuadrados[i] = valoresEntrada[i] * valoresEntrada[i];
   }

   printf("\n");

   for (int i = 0; i < 10; i++)
   {
      printf("Valor ao quadrado na posição: [%d] = %d\n", i + 1, valoresQuadrados[i]);
   }

   return 0;
}