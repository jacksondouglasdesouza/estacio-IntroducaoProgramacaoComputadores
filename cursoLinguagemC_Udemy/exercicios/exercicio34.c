#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia entradas X e Y;
    * O programa deve ler uma quantidade inderterminada de entradas, até que digite 0;
    *Para cada ponto monstre a qual quadrante pertence, se 0 finalizar o programa;
    */

   double x, y;

   printf("Digite o valor de X e Y ou [ 0 para finalizar ] : \n\n");
   scanf("%lf %lf", &x, &y);

   while (x != 0 && y != 0)
   {
      
      if (x > 0 && y > 0)
      {
         printf("O ponto [ X: %.2lf, Y: %.2lf ] pertence ao primeiro quadrante.\n\n", x, y);
      }
      else if (x < 0 && y > 0)
      {
         printf("O ponto [ X: %.2lf, Y: %.2lf ] pertence ao segundo quadrante.\n\n", x, y);
      }
      else if (x < 0 && y < 0)
      {
         printf("O ponto [ X: %.2lf, Y: %.2lf ] pertence ao terceiro quadrante.\n\n", x, y);
      }
      else if (x > 0 && y < 0)
      {
         printf("O ponto [ X: %.2lf, Y: %.2lf ] pertence ao quarto quadrante.\n\n", x, y);
      }

      printf("Digite o valor de X e Y ou [ 0 para finalizar ] : \n\n");
      scanf("%lf %lf", &x, &y);
   }

   return 0;
}