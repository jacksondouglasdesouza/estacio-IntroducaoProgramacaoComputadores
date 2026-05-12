#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
   *Modificadores de tipo de dados
   *int - inteiro - 4 bytes - -2.147.483.648 a 2.147.483.647
   *long int - inteiro longo - 8 bytes - -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807
   *unsigned int - inteiro sem sinal - 4 bytes - 0 a 4.294.967.295

   *double - ponto flutuante de dupla precisão - 8 bytes - 1.7E-308 a 1.7E+308
   *long double - ponto flutuante de precisão estendida - 16 bytes - 3.4E-4932 a 1.1E+4932
   */

   int numeroComOverflow = 2147483648;           // O valor máximo para um int é 2147483647, então isso causará um overflow
   unsigned int numeroUnsigned = 2147483647 + 2; // O valor máximo para um unsigned int é 4294967295, então isso não causará um overflow

   printf("Valor com overflow: %d\n", numeroComOverflow);
   printf("Valor sem overflow usando unsigned int: %u\n", numeroUnsigned);

   // - USANDO LONG INT

   int numeroIntNormal = 2147483647;        // Valor máximo para int+
   long int numeroLongInt = 2147483647 + 1; // Valor que excede o limite do int, mas é válido para long int
   // O windows tem o long int com 4 bytes, então ele não suporta o valor acima, mas o linux tem o long int com 8 bytes, então ele suporta o valor acima!
   printf("Valor normal: %d\n", numeroIntNormal);
   printf("Valor usando long int: %ld\n\n\n", numeroLongInt);

   //- USANDO DOUBLE E LONG DOUBLE - //

   double numeroDouble = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208999752092;
   long double numeroLongDouble = 3.141592653589793238462643383279502884197169399375105820974944592307816406286208999752092;
   printf("Valor usando double: %f\n", numeroDouble);
   printf("Valor usando long double: %.2lf\n\n", numeroLongDouble); // No Windows não processa | No linux sim.

   //--

   unsigned long int numeroUnsignedLongInt = 4000000000;
   unsigned int numeroUnsignedInt = 4000000000;
   long int numeroLongInt2 = 4000000000;
   long long int numeroLongLongInt = 4000000000;
   int numeroInt2 = 4000000000;

   printf("Valor de unsigned long int: %lu\n", numeroUnsignedLongInt);
   printf("Valor de unsigned int: %u\n", numeroUnsignedInt);
   printf("Valor de long int: %ld\n", numeroLongInt2);
   printf("Valor de long long int: %lld\n", numeroLongLongInt);
   printf("Valor de int: %d\n\n", numeroInt2);

   return 0;
}