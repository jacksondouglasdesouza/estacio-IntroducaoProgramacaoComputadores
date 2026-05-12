#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
    *Operadores Relacionais
    * == - igual a
    * != - diferente de
    * > - maior que
    * < - menor que
    * >= - maior ou igual a
    * <= - menor ou igual a
    */

   int a = 10, b = 20, c = 20;

   printf("a > b: %d\n", a > b);
   printf("a < b: %d\n", a < b);
   printf("a == b: %d\n", a == b);
   printf("a != b: %d\n", a != b);

   printf("b >= c: %d\n", b >= c);
   printf("b <= c: %d\n", b <= c);

   return 0;
}