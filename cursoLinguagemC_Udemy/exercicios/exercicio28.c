#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Dado um determnado material radioativo que perde pela metade a sua massa a cada 50 segundos;
    * Dada essa massa inicial em gramas, faça um programa que determine o tempo necessário para que essa massa se torne menor que 0.05 gramas.
    */

   double massa;
   int tempo = 0;

   printf("Digite a massa em gramas: ");
   scanf("%lf", &massa);

   if (massa <= 0)
   {
      printf("A massa deve ser um valor positivo.");
      return 1;
   }

   while (massa >= 0.05)
   {
      massa /= 2;
      tempo += 50;
      printf("Massa atual: %.2lf gramas | Tempo: %d segundos\n", massa, tempo);
   }

   printf("O tempo necessário para que essa massa se torne menor que 0.05 gramas é de %d segundos.", tempo);

   return 0;
}