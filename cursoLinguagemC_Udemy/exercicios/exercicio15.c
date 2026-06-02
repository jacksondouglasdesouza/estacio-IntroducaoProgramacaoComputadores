#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um caracter de entrada e imprima se é uma vogal ou consoante.
    */

   char letra;

   printf("Digite uma letra: ");
   scanf(" %c", &letra);

   if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
   {
      printf("A letra '%c' é uma vogal.", letra);
   }
   else
   {
      printf("A letra '%c' é uma consoante.", letra);
   }

   return 0;
}