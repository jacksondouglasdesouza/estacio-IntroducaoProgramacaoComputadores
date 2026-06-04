#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia uma senha do usuário e verifique se ela é igual a "123456". Se for, exiba a mensagem "Acesso permitido". Caso contrário, exiba "Acesso negado | Senha incorreta".
    */

   char senha[20];

   printf("Digite sua senha: ");
   fgets(senha, sizeof(senha), stdin);
   senha[strcspn(senha, "\n")] = '\0';

   while (strcmp(senha, "123456") != 0)
   {
      printf("Acesso negado | Senha incorreta\n");
      printf("Digite sua senha: ");
      fgets(senha, sizeof(senha), stdin);
      senha[strcspn(senha, "\n")] = '\0';
   }

   printf("Acesso permitido\n");

   return 0;
}