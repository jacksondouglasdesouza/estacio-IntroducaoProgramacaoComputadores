#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int numeroJogador, numeroComputador, resultado;
   char tipoComparacao;

   srand(time(0));
   numeroComputador = rand() % 100 + 1;

   printf("Bem vindo ao jogo maior, menor ou igual que!\n");
   printf("Você deve escolher um número e o tipo de comparação.\n");
   printf("M -> Maior\n");
   printf("N -> Menor\n");
   printf("I -> Igual\n");
   printf("Digite sua escolha: ");
   scanf(" %c", &tipoComparacao);

   //--

   printf("Digite um número entre 1 e 100: ");
   scanf("%d", &numeroJogador);


   switch (tipoComparacao)
   {
   case 'M':
   case 'm':
         printf("| M - Maior que |\n");
      resultado = (numeroJogador > numeroComputador) ? 1: 0;
      break;
   case 'N':
   case 'n':
         printf("| N - Menor que |\n");
      resultado = (numeroJogador < numeroComputador) ? 1: 0;
      break;
   case 'I':
   case 'i':
         printf("| I - Igual a |\n");
      resultado = (numeroJogador == numeroComputador) ? 1: 0;
      break;
   default:
      printf("Opção inválida.\n");
   }

   printf("Número computador = %d\n", numeroComputador);
   printf("Número jogador = %d\n", numeroJogador);

   if (resultado == 1) {
      printf("Parabéns, você ganhou!\n");
   } else if (resultado == 0) {
      printf("Infelizmente, você perdeu!\n");
   } else {
      printf("Você empatoou com o computador!\n");
   }

   return 0;
}