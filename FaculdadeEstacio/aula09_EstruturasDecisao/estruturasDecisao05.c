#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //-- Faça um programa que verifica se a pessoa tem menos de 18 || mais de 60 anos
   // e ela deve ter uma renda mensal menor que 2.000
   // Caso verdadeiro aplique o descondo especial.

   int idade;
   float renda;

   printf("Digite a sua idade: ");
   scanf("%d",&idade);

   printf("Digite a sua renda mensal: ");
   scanf("%f",&renda);

   if ((idade < 18 || idade > 60) && renda < 2000) {
      printf("Você ganhou o descnto especial!");
   } else {
      printf("Você não ganhou desconto, pois sua renda é superior a 2.000 ou sua idade não é compatível.");
   }

   //--

   int idade01, dependentes;
   float renda01;

   printf("\n-------------------\n");

   printf("Digite a sua idade: ");
   scanf("%d",&idade);
   printf("Digite a sua renda mensal: ");
   scanf("%f",&renda);
   printf("Digite o número de dependentes: ");
   scanf("%d",&dependentes);

   if (idade >= 18 && idade < 65) {
      if (renda < 3000) {
         if (dependentes > 2) {
            printf("Você atende a todos os critérios");
         }else {
            printf("Você não atende ao critério dependente.\n");
         }

      }else {
         printf("Você não atende o critério renda.\n");
      }

   } else {
      printf("Você não atende os critérios de idade.\n");
   }


   return 0;
}