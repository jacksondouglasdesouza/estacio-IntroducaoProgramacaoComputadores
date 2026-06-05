#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

#define NUM_FUNCIONARIOS 25000

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que calcule o valor médio dos salários de uma empresa com 25.000 funcionários.
    * O programa ainda, deve informar o maior e o menor salário da empresa.
    * use reajuste no rand para mostrar uma média mais próxima da realidade;
    *
    */

   srand(time(NULL));

   double salarios[NUM_FUNCIONARIOS];

   for (int i = 0; i < NUM_FUNCIONARIOS; i++)
   {
      double reajusteMedia = (double)rand() / RAND_MAX;
      double reajusteCurvado = pow(reajusteMedia, 20);
      salarios[i] = 1999.99 + (reajusteCurvado * 98995.99);
   }

   double maiorSalario = salarios[0];
   double menorSalario = salarios[0];
   double somaSalarios = 0.0;

   for (int i = 0; i < NUM_FUNCIONARIOS; i++)
   {
      somaSalarios += salarios[i];

      if (salarios[i] > maiorSalario)
      {
         maiorSalario = salarios[i];
      }

      if (salarios[i] < menorSalario)
      {
         menorSalario = salarios[i];
      }
   }

   double salarioMedio = somaSalarios / NUM_FUNCIONARIOS;

   printf("Salário médio: %.2f\n", salarioMedio);
   printf("Maior salário: %.2f\n", maiorSalario);
   printf("Menor salário: %.2f\n", menorSalario);

   return 0;
}