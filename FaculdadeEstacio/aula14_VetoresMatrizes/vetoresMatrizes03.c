#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int vetor[5];

   for (int i = 0; i < 5; i++)
   {
      vetor[i] = i * 2;
   }

   //--

   printf("[ %d ]\n", vetor[0]);
   printf("[ %d ]\n", vetor[1]);
   printf("[ %d ]\n", vetor[2]);
   printf("[ %d ]\n", vetor[3]);
   printf("[ %d ]\n\n", vetor[4]);

   for (int i = 0; i < 5; i++)
   {
      printf("[ %d ]\n", vetor[i] + 1);
   }

   return 0;
}