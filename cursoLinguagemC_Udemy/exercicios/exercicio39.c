#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "portuguese");

   /*
      Escreva um programa para ler as notas da primeira e da segunda avaliação de um aluno.
      Calcule e imprima a média semestral.
      O programa deverá aceitar apenas notas válidas no intervalo 0 a 10.
      Cada nota deve ser validada separadamente.
      Ao final, deve ser impressa a mensagem "novo calculo? (1-sim 2-nao)", indicando se ele deseja ou não executar o programa novamente.
      Se for informado o código 1, deve ser repetida a execução de todo o programa para permitir um novo cálculo, se for informado o código 2 o programa deve ser encerrado.
   */

   double nota1, nota2, media;
   int opcao;

   do
   {

      printf("Digite a nota da primeira avaliação: ");
      scanf("%lf", &nota1);

      while (nota1 < 0 || nota1 > 10)
      {
         printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
         scanf("%lf", &nota1);
      }

      printf("Digite a nota da segunda avaliação: ");
      scanf("%lf", &nota2);

      while (nota2 < 0 || nota2 > 10)
      {
         printf("Nota inválida! Digite uma nota entre 0 e 10.\n");
         scanf("%lf", &nota2);
      }

      media = (nota1 + nota2) / 2;

      printf("Média semestral: %.2lf\n", media);

      printf("Deseja fazer um novo cálculo? [ 1-sim 2-nao ]: ");
      scanf("%d", &opcao);

   } while (opcao != 2);

   printf("\n[ Encerrando o programa... ]\n\n");

   return 0;
}