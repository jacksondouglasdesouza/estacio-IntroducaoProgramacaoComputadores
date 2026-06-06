#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "pt_BR.UTF-8");

   /*
      Escreva um programa para ler as notas da primeira e da segunda avaliaÃ§Ã£o de um aluno.
      Calcule e imprima a mÃ©dia semestral.
      O programa deverÃ¡ aceitar apenas notas vÃ¡lidas no intervalo 0 a 10.
      Cada nota deve ser validada separadamente.
      Ao final, deve ser impressa a mensagem "novo calculo? (1-sim 2-nao)", indicando se ele deseja ou nÃ£o executar o programa novamente.
      Se for informado o cÃ³digo 1, deve ser repetida a execuÃ§Ã£o de todo o programa para permitir um novo cÃ¡lculo, se for informado o cÃ³digo 2 o programa deve ser encerrado.
   */

   double nota1, nota2, media;
   int opcao;

   do
   {

      printf("Digite a nota da primeira avaliaÃ§Ã£o: ");
      scanf("%lf", &nota1);

      while (nota1 < 0 || nota1 > 10)
      {
         printf("Nota invÃ¡lida! Digite uma nota entre 0 e 10.\n");
         scanf("%lf", &nota1);
      }

      printf("Digite a nota da segunda avaliaÃ§Ã£o: ");
      scanf("%lf", &nota2);

      while (nota2 < 0 || nota2 > 10)
      {
         printf("Nota invÃ¡lida! Digite uma nota entre 0 e 10.\n");
         scanf("%lf", &nota2);
      }

      media = (nota1 + nota2) / 2;

      printf("MÃ©dia semestral: %.2lf\n", media);

      printf("Deseja fazer um novo cÃ¡lculo? [ 1-sim 2-nao ]: ");
      scanf("%d", &opcao);

   } while (opcao != 2);

   printf("\n[ Encerrando o programa... ]\n\n");

   return 0;
}