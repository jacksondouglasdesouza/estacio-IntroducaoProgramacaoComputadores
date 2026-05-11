#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   printf("Hello, World!\n");
   // --

   int a = 20;
   int b = 20;
   int c = a + b;
   printf("Olá, bem vindo ao C! a + b = %d\n", c);
   printf("Acentuação é? Sim!\n");

   //--
   return 0;
}