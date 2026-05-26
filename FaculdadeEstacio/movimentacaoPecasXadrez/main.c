#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// FUNÇÕES RECURSIVAS
// 1. Torre: Recursividade simples
void moverTorre(int casas, char *direcao)
{
   // Caso Base: condição de parada da recursividade
   if (casas <= 0)
   {
      return;
   }
   // Passo Recursivo: imprime a direção e chama a si mesma com n-1
   printf("%s\n", direcao);
   moverTorre(casas - 1, direcao);
}

// 2. Rainha: Recursividade simples
void moverRainha(int casas, char *direcao)
{
   if (casas <= 0)
   {
      return;
   }
   printf("%s\n", direcao);
   moverRainha(casas - 1, direcao);
}

// 3. Bispo: Recursividade combinada com Loops Aninhados
// O loop mais externo controla o movimento vertical, o interno o horizontal
void moverBispo(int casas, char *dirVertical, char *dirHorizontal)
{
   if (casas <= 0)
   {
      return;
   }

   // Loop externo: Movimento Vertical (1 passo)
   for (int v = 0; v < 1; v++)
   {
      printf("%s\n", dirVertical);

      // Loop interno: Movimento Horizontal (1 passo)
      for (int h = 0; h < 1; h++)
      {
         printf("%s\n", dirHorizontal);
      }
   }

   // Após executar 1 passo diagonal (cima e direita), chama a próxima iteração recursiva
   moverBispo(casas - 1, dirVertical, dirHorizontal);
}

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*

// VERSÃO 01 - SEM FUNÇÕES DE RECURSIVIDADE //


   int movimentosTorre = 5;
   int movimentosBispo = 5;
   int movimentosRainha = 8;

   char direcaoTorre[] = "Direita";
   char direcaoBispo[] = "Cima Direita";
   char direcaoRainha[] = "Esquerda";

   // Cavalo

   int totalMovimentosL = 1;
   int casasBaixoCavalo = 2;
   int casasEsquerdaCavalo = 1;

   char direcaoCavaloBaixo[] = "Baixo";
   char direcaoCavaloEsquerda[] = "Esquerda";

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

   // SIMULAÇÃO DO CAVALO

   printf("\n--- Simulacão de Movimento: CAVALO ---\n");

   for (int i = 0; i < totalMovimentosL; i++)
   {

      int j = 0;
      while (j < casasBaixoCavalo)
      {
         printf("%s\n", direcaoCavaloBaixo);
         j++;
      }

      int k = 0;
      do
      {
         printf("%s\n", direcaoCavaloEsquerda);
         k++;
      } while (k < casasEsquerdaCavalo);
   }

   */

   // VERSÃO 02 - COM FUNÇÕES DE RECURSIVIDADE //

   int casasTorre = 5;
   int casasRainha = 8;
   int casasBispo = 5;

   char dirDireita[] = "Direita";
   char dirEsquerda[] = "Esquerda";
   char dirCima[] = "Cima";

   // Execução dos Movimentos
   printf("--- Simulacao de Movimento: TORRE ---\n");
   moverTorre(casasTorre, dirDireita);

   printf("\n--- Simulacao de Movimento: BISPO ---\n");
   moverBispo(casasBispo, dirCima, dirDireita);

   printf("\n--- Simulacao de Movimento: RAINHA ---\n");
   moverRainha(casasRainha, dirEsquerda);

   // --------------------------------------------------
   // SIMULAÇÃO DO CAVALO
   // --------------------------------------------------
   printf("\n--- Simulacao de Movimento: CAVALO ---\n");

   // Loop complexo com múltiplas variáveis: 'i' (iteração geral), 'movCima' e 'movDireita'
   // O loop não tem condição de parada no cabeçalho (;;), o controle é feito internamente.
   for (int i = 0, movCima = 0, movDireita = 0;; i++)
   {

      // Primeiro gerencia o movimento para cima (2 casas)
      if (movCima < 2)
      {
         printf("%s\n", dirCima);
         movCima++;
         continue; // Interrompe o ciclo atual e pula para a próxima iteração do loop (i++)
      }

      // Depois gerencia o movimento para a direita (1 casa)
      if (movDireita < 1)
      {
         printf("%s\n", dirDireita);
         movDireita++;
         continue; // Volta para o início do loop
      }

      // Se as duas condições acima não forem atendidas, significa que
      // já movemos 2 para cima e 1 para a direita. Usamos o break para sair do loop.
      break;
   }

   return 0;
}