#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int i = 1;

   do
   {
      printf("%d <\n", i);
      i++;

   } while (i <= 10);

   //--

   int option;

   do
   {
      printf("Menu:\n");
      printf("1. Opção 1\n");
      printf("2. Opção 2\n");
      printf("3. Sair\n");
      printf("Escolha uma opção: \n");
      scanf("%d", &option);

      switch (option)
      {
      case 1:
         printf("Você escolheu a opção 1\n");
         break;
      case 2:
         printf("Você escolheu a opção 2\n");
         break;
      case 3:
         printf("Saindo...\n");
         break;
      default:
         printf("Opção inválida!\n");
      }
   } while (option != 3);

   return 0;
}