#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void recursividade(int n)
{
   if (n > 0)
   {
      printf("%d \n", n);
      recursividade(n - 1);
   }
}
int main()
{
   setlocale(LC_ALL, "Portuguese");

   int value = 10;

   printf("| Contagem Regresiva |\n");
   recursividade(value);
   return 0;
}