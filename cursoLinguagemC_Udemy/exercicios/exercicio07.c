#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Faça um programa que leia do teclado uma quantidade qualquer de segundos
    * e apresente-os convertidos em horas, minutos e segundos.
    */

   int segundos, horas, minutos, segundosRestantes;

   printf("Digite o numero de segundos: ");
   scanf("%d", &segundos);

   horas = segundos / 3600;
   minutos = (segundos % 3600) / 60;
   segundosRestantes = (segundos % 3600) % 60;

   printf("Horas: %d\n", horas);
   printf("Minutos: %d\n", minutos);
   printf("Segundos: %d\n", segundosRestantes);

   return 0;
}