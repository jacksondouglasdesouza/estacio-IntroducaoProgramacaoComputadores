#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Crie um programa que calcula o IMC (I?ndice de Massa Corporal) de uma pessoa. [ imc = peso / (altura * altura) ]
    * O programa deve solicitar ao usuário o peso (em quilogramas) e a altura (em metros).
    * Em seguida, o programa deve calcular o IMC e exibir o resultado na tela.
    * Além disso, o programa deve classificar o resultado do IMC de acordo com a seguinte tabela:
    * - IMC < 18.5: Abaixo do peso
    * - IMC entre 18.5 e 24.9: Peso normal
    * - IMC entre 25 e 29.9: Sobrepeso
    * - IMC entre 30 e 34.9: Obesidade grau 1
    * - IMC entre 35 e 39.9: Obesidade grau 2
    * - IMC >= 40: Obesidade grau 3
    */

   float peso, altura, imc;

   printf("Digite o peso em kg: ");
   scanf("%f", &peso);
   printf("Digite a altura em metros: ");
   scanf("%f", &altura);

   imc = peso / (altura * altura);

   printf("O IMC é: %.2f\n", imc);

   if (imc < 18.5)
   {
      printf("Classificação: Abaixo do peso\n");
   }
   else if (imc >= 18.5 && imc < 25)
   {
      printf("Classificação: Peso normal\n");
   }
   else if (imc >= 25 && imc < 30)
   {
      printf("Classificação: Sobrepeso\n");
   }
   else if (imc >= 30 && imc < 35)
   {
      printf("Classificação: Obesidade grau 1\n");
   }
   else if (imc >= 35 && imc < 40)
   {
      printf("Classificação: Obesidade grau 2\n");
   }
   else
   {
      printf("Classificação: Obesidade grau 3\n");
   }

   return 0;
}