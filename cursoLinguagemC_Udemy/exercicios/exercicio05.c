#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Uma empresa vai contratar um encanador por:
    * R$ 45,00 a diária
    * FAÇA UM PROGRAMA QUE SOLICITE O NÚMERO DE DIAS QUE O ENCANADOR TRABALHOU
    * CALCULE E EXIBA O VALOR TOTAL A PAGAR DESCONTADO 8% DE IMPOSTO.
    */

   float diasTrabalhados, valorDiaria = 45.00, imposto = 0.08;

   printf("Digite o numero de dias trabalhados: ");
   scanf("%f", &diasTrabalhados);

   float valorBruto = diasTrabalhados * valorDiaria;
   float descontoInss = (diasTrabalhados * valorDiaria) * imposto;
   float valorLiquido = (diasTrabalhados * valorDiaria) - descontoInss;

   printf("\n");
   printf("Valor total: %.2f\n", valorBruto);
   printf("Desconto do Imposto: %.2f\n", descontoInss);
   printf("Valor a Receber: %.2f\n\n", valorLiquido);

   return 0;
}