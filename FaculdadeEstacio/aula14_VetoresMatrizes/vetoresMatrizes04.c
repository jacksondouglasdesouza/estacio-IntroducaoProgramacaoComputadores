#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int matriz[3][3];

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         matriz[i][j] = i + j;
         printf("Matriz[ %d ][ %d ] = [ %d ]\n", i, j, matriz[i][j]);
      }
   }

   //--

   int vetorX[5] = {1, 2, 3, 4, 5};
   int somaVetorX = 0;

   for (int i = 0; i < 5; i++)
   {
      somaVetorX += vetorX[i];
   }

   printf("\nSoma do Vetor X: %d\n\n", somaVetorX);

   //--

   int matriz01[2][2] = {{1, 2}, {3, 4}};
   int matriz02[2][2] = {{5, 6}, {7, 8}};
   int matrizSoma[2][2];

   for (int i = 0; i < 2; i++)
   {
      for (int j = 0; j < 2; j++)
      {
         matrizSoma[i][j] = matriz01[i][j] + matriz02[i][j];
         printf("MatrizSoma: [ %d ] + [ %d ] = [ %d ]\n", matriz01[i][j], matriz02[i][j], matrizSoma[i][j]);
      }
   }

   printf("\n");

   return 0;
}