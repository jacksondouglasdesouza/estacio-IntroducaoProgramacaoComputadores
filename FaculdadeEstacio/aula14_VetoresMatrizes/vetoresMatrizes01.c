#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int Arrays[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 1001};

   for (int i = 0; i < Arrays[i]; i++)
   {
      printf("%d\n", Arrays[i]);
   }

   printf("\n");

   //--

   float notas[3] = {85.5, 93.2, 87.9};

   for (int i = 0; i < 3; i++)
   {
      printf("Nota do Aluno %d: %.2f\n", i + 1, notas[i]);
   }

   printf("\n");

   //--

   char letras[4] = {'A', 'B', 'C', 'D'};

   for (int i = 0; i < letras[i]; i++)
   {
      printf("Letra %d: %c\n", i + 1, letras[i]);
   }

   printf("\n");

   //--

   char *nomes[] = {"Joaquim", "Maria", "João", "Ana", "Paulo"};

   for (int i = 0; i < 5; i++)
   {
      printf("Nome %d: %s\n", i + 1, nomes[i]);
   }

   printf("\n");

   return 0;
}