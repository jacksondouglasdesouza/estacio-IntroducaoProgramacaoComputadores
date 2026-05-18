#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
   char letra;
   printf("Entre com uma letra minúscula: \n");
   scanf("%c", &letra);
   letra = letra + ('A' - 'a');
   printf("Caracter = %c", letra);
   */

   /*

   int n, i;
   i = 20;
   n = 2 * (i % 3);
   printf("Valor de n = %d", n);

   */

   /*
   int nun;
   printf("Digite um numero: ");
   scanf("%d", &nun);
   nun = nun + nun % 3;
   printf("Num = %d\n", nun);
   */

   char ch1, ch2;
   printf("Digite duas letras: \n");
   scanf("%c %c", &ch1, &ch2);
   ch1 = ch2;
   ch2 = ch1;
   printf("Ch1 = %c e Ch2 = %c\n", ch1, ch2);

   return 0;
}