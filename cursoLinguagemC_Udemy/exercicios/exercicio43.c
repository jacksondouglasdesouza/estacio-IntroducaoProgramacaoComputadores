#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que receba a temperatura média de cada mês de um ano.
    * Armazene a temperatura média de cada mês em um vetor.
    * Ao final mostre a maior e a menor temperatura do ano e em que mês elas ocorreram.
    * Mostre o mês por extenso.
    * Desconsiderar empates.
    */

   double maiorTemperatura = -999.0;
   double menorTemperatura = 999.0;
   int mesMenorTemperatura = 0;
   int mesMaiorTemperatura = 0;

   char *nomeMeses[12] = {
       "Janeiro",
       "Fevereiro",
       "Março",
       "Abril",
       "Maio",
       "Junho",
       "Julho",
       "Agosto",
       "Setembro",
       "Outubro",
       "Novembro",
       "Dezembro"};

   int diasMeses[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
   double temperaturaMediaMensal[12];

   for (int mes = 0; mes < 12; mes++)
   {
      double soma = 0.0;

      for (int dia = 0; dia < diasMeses[mes]; dia++)
      {
         double temperatura = (rand() % 451) / 10.0;
         soma += temperatura;

         //--

         if (temperatura > maiorTemperatura)
         {
            maiorTemperatura = temperatura;
            mesMaiorTemperatura = mes;
         }

         //--

         if (temperatura < menorTemperatura)
         {
            menorTemperatura = temperatura;
            mesMenorTemperatura = mes;
         }
      }

      temperaturaMediaMensal[mes] = soma / diasMeses[mes];

      printf("A temperatura média de %s é %.1f ºC\n", nomeMeses[mes], temperaturaMediaMensal[mes]);
   }

   printf("\n");

   printf("A maior temperatura do ano foi %.1f ºC no mês [ %s ]\n", maiorTemperatura, nomeMeses[mesMaiorTemperatura]);
   printf("A menor temperatura do ano foi %.1f ºC no mês [ %s ]\n", menorTemperatura, nomeMeses[mesMenorTemperatura]);

   return 0;
}