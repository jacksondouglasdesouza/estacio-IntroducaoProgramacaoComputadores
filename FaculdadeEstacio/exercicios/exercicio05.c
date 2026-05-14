#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int escolhaJogador, escolhaComputador;

   srand(time(0));

   printf("|  JOGO DO JOKENPÔ |\n");
   printf("Escolha uma opção:  \n");
   printf("1 . Pedra\n");
   printf("2 . Papel\n");
   printf("3 . Tesoura\n");
   printf("Escolha:  ");
   scanf("%d", &escolhaJogador);

   switch (escolhaJogador) {
      case 1:
         printf("Jogador -> Pedra\n");
         break;
      case 2:
         printf("Jogador -> Papel\n");
         break;
      case 3:
         printf("Jogador -> Tesoura\n");
         break;
      default:
         printf("Opção Inválida!\n");
   }

   escolhaComputador = rand() % 3 + 1;

   switch (escolhaComputador) {
      case 1:
         printf("Computador -> Pedra\n");
         break;
      case 2:
         printf("Computador -> Papel\n");
         break;
      case 3:
         printf("Computador -> Tesoura\n");
         break;
   }

   if (escolhaJogador == escolhaComputador) {
      printf("O jogo empatou!\n");
   } else if ((escolhaJogador == 1 && escolhaComputador == 3) || (escolhaJogador == 2 && escolhaComputador == 1) || (escolhaJogador == 3 && escolhaComputador == 2)) {
      printf("O jogador ganhou!");
   } else {
      printf("O computador ganhou!\n");
   }

   return 0;
}
