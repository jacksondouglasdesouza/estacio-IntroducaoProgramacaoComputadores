#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Getchar - leitura de um caractere do teclado

   char sexo;

   printf("Digite seu sexo (M|F): ");
   sexo = getchar();

   printf("O seu sexo é: %c\n", sexo);
   printf("O código ASCII do seu sexo é: %d\n", sexo);

   return 0;
}