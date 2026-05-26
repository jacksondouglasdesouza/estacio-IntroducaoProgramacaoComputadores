#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   for (int i = 0, j = 10; i < j; i++, j--)
   {
      printf("i: %d, j: %d\n", i, j);
   }

   return 0;
}