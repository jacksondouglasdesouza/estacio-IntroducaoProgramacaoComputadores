#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que calcule o crescimento do personagem;
    * Chico - tem 1.50 metros e cresce 2 centímetros por ano;
    * Zé - tem 1.10 metros e cresce 3 centímetros por ano;
    * Mostre quantos anos serão necessários para que Zé seja maior que Chico.
    */

   double alturaChico = 1.50;
   double alturaZe = 1.10;
   int anos = 0;

   while (alturaChico > alturaZe)
   {
      alturaChico += 0.02;
      alturaZe += 0.03;
      anos += 1;
   }

   printf("Serão necessários %d anos para que Zé seja maior que Chico.\n", anos);

   return 0;
}