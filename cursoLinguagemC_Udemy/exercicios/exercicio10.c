#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que defina quantos números são positivos, negativos e zeros. O programa deve ler 10 números do usuário e exibir a contagem de cada tipo de número.
    */

   int numbers[10];

   printf("Digite 10 números:\n");
   scanf("%d %d %d %d %d %d %d %d %d %d", &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4], &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);

   int positiveCount = 0, negativeCount = 0, zeroCount = 0;

   for (int i = 0; i < 10; i++)
   {
      if (numbers[i] > 0)
      {
         positiveCount++;
      }
      else if (numbers[i] < 0)
      {
         negativeCount++;
      }
      else
      {
         zeroCount++;
      }
   }

   printf("Números positivos: %d\n", positiveCount);
   printf("Números negativos: %d\n", negativeCount);
   printf("Números zeros: %d\n", zeroCount);

   return 0;
}