#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que peça números ao usuário;
    * Quando o usuário digitar o 0, o programa deve parar e mostrar quantos + e negativos foram digitados.
    */

   int numero, positivos = 0, negativos = 0;

   while (numero != 0)
   {
      printf("Digite um número (0 para sair): ");
      scanf("%d", &numero);

      if (numero > 0)
         positivos++;
      else if (numero < 0)
         negativos++;
   }

   printf("Quantidade de números positivos: %d\n", positivos);
   printf("Quantidade de números negativos: %d\n", negativos);

   return 0;
}