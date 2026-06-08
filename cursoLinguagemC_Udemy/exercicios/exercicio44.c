#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "portuguese");
   srand(time(NULL));

   /***
    * Escreva um programa que gere 10 números inteiros e os armazene em um vetor de 10 posições.
    * MOnte um menu que faça:
    * 0) - Fim do programa
    * 1) - Mostrar o vetor de 10 posições - na ordem em que foram gerados
    * 2) - Mostrar o vetor de 10 posições - na ordem inversa
    * -- O programa deve funcionar até que o usuário escolha o número 0.
    */

   int vetor[10];
   int opcao = -1;

   for (int i = 0; i < 10; i++)
   {
      vetor[i] = rand() % 100;
   }

   do
   {

      printf("\n");
      printf("Escolha uma opção:\n");
      printf("0) Finalizar do programa\n");
      printf("1) Mostrar o vetor de 10 posições - na ordem em que foram gerados\n");
      printf("2) Mostrar o vetor de 10 posições - na ordem inversa que foram gerados\n");
      printf("Opção:  ");
      scanf("%d", &opcao);

      switch (opcao)
      {
      case 0:
         printf("[ O programa foi encerrado com sucesso ]\n");
         break;
      case 1:
         for (int i = 0; i < 10; i++)
         {
            printf("%d ", vetor[i]);
         }
         printf("\n");
         break;
      case 2:
         for (int i = 9; i >= 0; i--)
         {
            printf("%d ", vetor[i]);
         }
         printf("\n");
         break;
      default:
         printf("Opção inválida\n");
      }

   } while (opcao != 0);

   printf("\n");

   return 0;
}