#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

   setlocale(LC_ALL, "Portuguese");

   char nomeCompletoUsuario[100];

   printf("Digite seu nome completo: ");
   fgets(nomeCompletoUsuario, sizeof(nomeCompletoUsuario), stdin);
   nomeCompletoUsuario[strcspn(nomeCompletoUsuario, "\n")] = '\0'; // Remove o caractere de nova linha adicionado pelo fgets

   printf("O nome completo é: %s\n", nomeCompletoUsuario);

   return 0;
}