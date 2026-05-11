#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   // - Casting ou conversão de tipos em C

   float num1, num2;
   int num3;

   printf("Digite um número decimal: ");
   scanf("%f", &num1);

   printf("Digite outro número decimal: ");
   scanf("%f", &num2);

   num3 = (int)(num1 / num2); // Casting para converter o resultado para inteiro

   printf("Casting: %f / %f = %d\n", num1, num2, num3);

   int numero1 = 10;
   int numero2 = 3;

   printf(">>> %d / %d = %f\n", numero1, numero2, numero1 / (float)numero2); // Casting para converter o resultado para float

   return 0;
}