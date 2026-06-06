#include <stdio.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Teste de Acentuação\n");
   printf("Cachaça\n");

   return 0;
}