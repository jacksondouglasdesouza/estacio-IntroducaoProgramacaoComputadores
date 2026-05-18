#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int opcao;
   float nota01, nota02, media;

   printf("| MENÚ DE OPÇÕES |\n");
   printf("1 - Calcular a média\n");
   printf("2 - Determinar status\n");
   printf("3 - Sair\n");
   printf("Digite a opção desejada: ");
   scanf("%d", &opcao);

   switch (opcao)
   {
   case 1:

      printf("Digite a primeira nota: ");
      scanf("%f", &nota01);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota02);

      if ((nota01 >= 0 && nota01 <= 10) && (nota02 >= 0 && nota02 <= 10))
      {
         media = (nota01 + nota02) / 2;
         printf("A média é: %.2f\n", media);
      }
      else
      {
         printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
      }
      break;

   case 2:
      printf("Digite a primeira nota: ");
      scanf("%f", &nota01);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota02);
      if ((nota01 >= 0 && nota01 <= 10) && (nota02 >= 0 && nota02 <= 10))
      {
         media = (nota01 + nota02) / 2;

         if (media >= 7.0)
         {
            printf("Status: Aprovado\n");
         }
         else if (media >= 5.0)
         {
            printf("Status: Recuperação\n");
         }
         else
         {
            printf("Status: Reprovado\n");
         }
      }
      else
      {
         printf("Notas inválidas. As notas devem estar entre 0 e 10.\n");
      }
      break;

   case 3:
      printf("Saindo do programa...\n");
      break;

   default:
      printf("Opção inválida. Por favor, escolha uma opção válida.\n");
   }

   return 0;
}