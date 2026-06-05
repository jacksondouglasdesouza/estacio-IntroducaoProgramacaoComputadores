#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   srand(time(NULL));

   /**
    * Crie um programa que simule uma pesquisa de campo;
    * O programa deve solicitar de 100 usuários as seguintes informações:
    * idade;
    * sexo (M ou F);
    * salário;
    * Como resultado, o programa deve exibir:
    * A) A média salarial do grupo;
    * B) A maior e a Menor idade do grupo;
    * C) A quantidade de mulheres com salário superior a R$ 2.000,00.
    */

   int idade[100];
   char sexo[100];
   float salario[100];

   for (int i = 0; i < 100; i++)
   {
      idade[i] = (rand() % 63) + 18;
      sexo[i] = (rand() % 2) ? 'M' : 'F';
      salario[i] = (rand() % 5000) + 1000;
   }

   float somaSalarios = 0.0;
   int maiorIdade = idade[0];
   int menorIdade = idade[0];
   int mulheresSalario2000 = 0;

   for (int i = 0; i < 100; i++)
   {
      somaSalarios += salario[i];

      if (idade[i] > maiorIdade)
      {
         maiorIdade = idade[i];
      }

      if (idade[i] < menorIdade)
      {
         menorIdade = idade[i];
      }

      if (sexo[i] == 'F' && salario[i] > 2000)
      {
         mulheresSalario2000++;
      }
   }

   printf("A) A média salarial do grupo: R$ %.2f\n", somaSalarios / 100);
   printf("B.1) A maior idade do grupo é: %d\n", maiorIdade);
   printf("B.2) A menor idade do grupo é: %d\n", menorIdade);
   printf("C) A quantidade de mulheres com salário superior a R$ 2.000,00: %d\n", mulheresSalario2000);

   return 0;
}