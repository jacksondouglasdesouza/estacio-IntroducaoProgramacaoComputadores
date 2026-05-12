#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   char produto01[50] = "Produto 01";
   char produto02[50] = "Produto 02";

   unsigned int estoqueProduto01 = 1000;
   unsigned int estoqueMinimoProduto01 = 500;
   unsigned int estoqueProduto02 = 2000;
   unsigned int estoqueMinimoProduto02 = 2500;

   float valorProduto01 = 10.50;
   float valorProduto02 = 20.40;

   double valorTotalProduto01 = estoqueProduto01 * valorProduto01;
   double valorTotalProduto02 = estoqueProduto02 * valorProduto02;

   //-- Exiba as informações dos produtos --//

   printf("\n| Produto 01 |\n");
   printf("Nome: %s\n", produto01);
   printf("Valor Unitário: R$ %.2f\n", valorProduto01);
   printf("Quantidade em Estoque: %u\n", estoqueProduto01);
   printf("Valor Total em Estoque: R$ %.2f\n", valorTotalProduto01);
   printf("A quantidade em estoque é suficiente? Baseado no estoque mínimo recomendado: \n");
   printf("[0 - Não | 1 - Sim] %d\n", estoqueProduto01 >= estoqueMinimoProduto01);
   printf("---------------------------------------------\n\n");

   printf("| Produto 02 |\n");
   printf("Nome: %s\n", produto02);
   printf("Valor Unitário: R$ %.2f\n", valorProduto02);
   printf("Quantidade em Estoque: %u\n", estoqueProduto02);
   printf("Valor Total em Estoque: R$ %.2f\n", valorTotalProduto02);
   printf("A quantidade em estoque é suficiente? Baseado no estoque mínimo recomendado: \n");
   printf("[0 - Não | 1 - Sim] %d\n", estoqueProduto02 >= estoqueMinimoProduto02);
   printf("---------------------------------------------\n\n");

   return 0;
}