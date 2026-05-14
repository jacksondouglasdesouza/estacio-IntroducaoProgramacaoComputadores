#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int num01 = -1100, num02 = -100;

   printf("\n\n");

   if (num01 > 0 && num02 > 0)
   {
      printf("Ambos os números são positivos\n");
   }
   else
   {
      printf("Um ou ambos os números são negativos\n");
   }

   if (num01 > 0 || num02 > 0)
   {
      printf("Um dos números é positivo\n");
   }
   else
   {
      printf("Nenhum dos números é positivo\n");
   }

   //--

   int numero = 0;

   if (!numero)
   {
      printf("O número é zero\n");
   }
   else
   {
      printf("O número é diferente de zero\n");
   }

   //-- Operdem de precedência dos operadores lógicos

   int n01 = 5, n02 = 10, n03 = 1;

   if (n01 > 0 && n02 < 0 || n03 == 0)
   {
      printf("A expressão é verdadeira\n");
   }
   else
   {
      printf("A expressão é falsa\n");
      //--

      int idade = 20;
      float altura = 1.55;

      if (idade >= 18 && idade <= 30 && altura >= 1.70)
      {
         printf("A pessoa é maior de idade e tem altura suficiente\n");
      }
      else
      {
         printf("A pessoa não atende aos critérios\n");
      }
      printf("\n\n");
   }
   return 0;
}