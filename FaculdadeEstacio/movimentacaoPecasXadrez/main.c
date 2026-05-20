#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int movimentosTorre = 5;
   int movimentosBispo = 5;
   int movimentosRainha = 8;

   char direcaoTorre[] = "Direita";
   char direcaoBispo[] = "Cima Direita";
   char direcaoRainha[] = "Esquerda";

   printf("--- Simulacão de Movimento: TORRE ---\n");

   for (int i = 0; i < movimentosTorre; i++)
   {
      printf("%s\n", direcaoTorre);
   }

   printf("\n--- Simulacão de Movimento: BISPO ---\n");

   int contadorBispo = 0;

   while (contadorBispo < movimentosBispo)
   {
      printf("%s\n", direcaoBispo);
      contadorBispo++;
   }

   printf("\n--- Simulacão de Movimento: RAINHA ---\n");

   int contadorRainha = 0;

   do
   {
      printf("%s\n", direcaoRainha);
      contadorRainha++;
   } while (contadorRainha < movimentosRainha);

   return 0;
}