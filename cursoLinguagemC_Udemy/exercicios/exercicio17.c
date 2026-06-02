#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia 3 notas do aluno;
    * Peça ao usuário se que calcular a média aritmética ou ponderada;
    * Se for aritmética, calcule a média aritmética das notas; Calculo da aritmética é n1 + n2 + n3 / 3;
    * Se for ponderada, calcule a média ponderada das notas, considerando os pesos 3, 3 e 4 respectivamente; Calculo da ponderada é n1 * 3 + n2 * 3 + n3 * 4 / 10;
    */

   float n1, n2, n3;
   int opcao;
   float media;

   printf("Digite a primeira nota: ");
   scanf("%f", &n1);

   printf("Digite a segunda nota: ");
   scanf("%f", &n2);

   printf("Digite a terceira nota: ");
   scanf("%f", &n3);

   printf("Escolha o tipo de média:\n");
   printf("1 - Aritmética\n");
   printf("2 - Ponderada\n");
   printf("Opção: ");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:
      media = (n1 + n2 + n3) / 3;
      printf("Média aritmética: %.2f\n", media);
      break;
   case 2:
      media = (n1 * 3 + n2 * 3 + n3 * 4) / 10;
      printf("Média ponderada: %.2f\n", media);
      break;
   default:
      printf("Opção inválida!\n");
   }

   return 0;
}