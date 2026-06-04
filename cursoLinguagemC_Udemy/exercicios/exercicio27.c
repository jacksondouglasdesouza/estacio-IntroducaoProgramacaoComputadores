#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1 centavo no primeiro dia, 2 centavos no segundo dia,
    * 4 centavos no terceiro dia, 8 centavos no quarto dia, e assim por diante.
    * Faça um programa para calcular quanto você terá ao final dos 30 dias.
    * 1º - 0.01        2º - 0.02        3º - 0.04        4º - 0.08
    */

   double valorDiario = 0.01;
   double totalAcumulado = 0.0;
   int dias = 30;

   for (int i = 1; i <= dias; i++)
   {

      totalAcumulado += valorDiario;
      valorDiario *= 2;
   }

   printf("Ao final de %d dias, voce tera: R$ %.2f\n", dias, totalAcumulado);

   return 0;
}