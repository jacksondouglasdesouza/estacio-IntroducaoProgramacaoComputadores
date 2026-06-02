#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que leia um valor para conversão cambial, entre real para dollar ou entre dollar para real.
    * O programa deve solicitar o valor a ser convertido e a direção da conversão (real para dollar ou dollar para real).
    * Em seguida, o programa deve realizar a conversão utilizando uma taxa de câmbio fixa (por exemplo, 1 dólar = 5,30 reais) e exibir o resultado da conversão.
    */

   float valor, valorConvertido;
   char direcao;

   printf("Digite o valor a ser convertido: ");
   scanf("%f", &valor);
   printf("Digite a direção da conversão (R de real para dollar | D de dollar para real): ");
   scanf(" %c", &direcao);

   if (direcao == 'R' || direcao == 'r')
   {
      valorConvertido = valor / 5.30;
      printf("O valor convertido é: US$ %.2f dólares\n", valorConvertido);
   }
   else if (direcao == 'D' || direcao == 'd')
   {
      valorConvertido = valor * 5.30;
      printf("O valor convertido é: R$ %.2f reais\n", valorConvertido);
   }
   else
   {
      printf("Direção da conversão é inválida. Por favor, escolha R ou D.\n");
   }

   return 0;
}