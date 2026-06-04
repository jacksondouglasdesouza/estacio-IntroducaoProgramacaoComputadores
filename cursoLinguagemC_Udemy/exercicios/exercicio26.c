#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que receba um número n do tipo long long int;
    * Ele deve informar se o número é primo ou não.
    */

   long long n;

   printf("Digite um número: ");
   scanf("%lld", &n);

   if (n < 2)
   {
      printf("O número %lld não é primo.\n", n);
      return 0;
   }

   long long isPrime = 1;

   for (long long i = 2; i <= n / i; i++)
   {
      if (n % i == 0)
      {
         isPrime = 0;
         break;
      }
   }

   if (isPrime == 1)
   {
      printf("O número %lld é primo.\n", n);
   }
   else
   {
      printf("O número %lld não é primo.\n", n);
   }

   return 0;
}