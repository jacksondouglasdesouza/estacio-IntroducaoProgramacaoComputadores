#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um número e informe ao usuário se ele é divisível por 2, por 3 ou por 5; ele deve ser divisível apenas por um destes!
    * */

   int numero;

   printf("Digite um número: ");
   scanf("%d", &numero);

   if (numero == 0)
   {
      printf("O número é divisível por 2, por 3 e por 5!");
   }
   else if (numero % 2 == 0 && numero % 3 != 0 && numero % 5 != 0)
   {
      printf("O número é divisível por 2!");
   }
   else if (numero % 3 == 0 && numero % 2 != 0 && numero % 5 != 0)
   {
      printf("O número é divisível por 3!");
   }
   else if (numero % 5 == 0 && numero % 2 != 0 && numero % 3 != 0)
   {
      printf("O número é divisível por 5!");
   }
   else
   {
      printf("O número não atende à regra (ou não é divisível por nenhum, ou é por mais de um)!");
   }

   return 0;
}