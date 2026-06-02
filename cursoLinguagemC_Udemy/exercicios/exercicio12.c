#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um número e informe ao usuário se ele é divisível por 2, por 3 é por 6; ele deve ser divisível pelos 3 valores ao mesmo tempo!
    * */

   int numero;

   printf("Digite um número: ");
   scanf("%d", &numero);

   if (numero % 2 == 0 && numero % 3 == 0 && numero % 6 == 0)
   {
      printf("O número é divisível por 2, por 3 e por 6!");
   }
   else
   {
      printf("O número não atende à regra (ou não é divisível por nenhum, ou é por apenas um ou dois deles)!");
   }

   return 0;
}