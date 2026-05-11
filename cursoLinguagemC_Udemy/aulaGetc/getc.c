#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   char sexoUsuario;

   printf("Digite o seu sexo (M|F): ");
   sexoUsuario = getc(stdin);

   printf("O sexo do usuário é: %c\n", sexoUsuario);

   return 0;
}