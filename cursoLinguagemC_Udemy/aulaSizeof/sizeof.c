#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   printf("Char: %d\n", sizeof(char));
   printf("Short: %d\n", sizeof(short));
   printf("Int: %d\n", sizeof(int));
   printf("Float: %d\n", sizeof(float));
   printf("Double: %lu\n", sizeof(double));
   printf("Long: %lu\n", sizeof(long));
   printf("Long long: %lu\n", sizeof(long long));

   // Unidades de medidas em computação

   /*
   1 bit = 0 ou 1
   1 byte = 8 bits
   1 KB (kilobyte) = 1024 bytes
   1 MB (megabyte) = 1024 KB
   1 GB (gigabyte) = 1024 MB
   1 TB (terabyte) = 1024 GB
   1 PB (petabyte) = 1024 TB
   1 EB (exabyte) = 1024 PB
   1 ZB (zettabyte) = 1024 EB
   1 YB (yottabyte) = 1024 ZB
   */

   // OVERFLOW - Estouro de variável
   /*


      int nun1, nun2, nun3;

      nun1 = 222222147852;
      nun2 = 2222222222147852;
      nun3 = nun1 + nun2;

      printf("Nun1: %d\n", nun1);
      printf("Nun2: %d\n", nun2);
      printf("Nun3: %d\n", nun3);

      printf("Resultado: %d\n", nun3);

   */

   // resolvendo o problema do overflow com o tipo long long

   long long nun1, nun2, nun3;

   nun1 = 222222147852;
   nun2 = 2222222222147852;
   nun3 = nun1 + nun2;

   printf("Nun1: %lld\n", nun1);
   printf("Nun2: %lld\n", nun2);
   printf("Nun3: %lld\n", nun3);

   printf("Resultado: %lld\n", nun3);

   // Usando long float

   long double pi = 3.14159265358979323846264338327950288419716939937510;

   printf("Valor de pi: %Lf\n", pi); // Não é possível imprimir o valor completo de pi, pois o tipo long double tem uma precisão limitada.

   // Usando __mingw_printf para imprimir o valor completo de pi

   __mingw_printf("Valor de pi: %Le\n", pi); // Imprime o valor completo de pi

   return 0;
}