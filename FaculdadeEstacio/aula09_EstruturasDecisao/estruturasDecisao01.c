#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int quantidadeMaca = 5000, quantidadeLaranja = 1000;

   printf("\nQuantidade de Maçãs: %d\n", quantidadeMaca);
   printf("Quantidade de Laranjas: %d\n", quantidadeLaranja);

   if (quantidadeMaca > quantidadeLaranja)
   {
      printf("A quantidde de Maçãs é maior que a de laranjas\n\n");
   }
   else if (quantidadeMaca < quantidadeLaranja)
   {
      printf("A quantidde de Maçãs é menor que a de laranjas\n\n");
   }
   else
   {
      printf("A quantidde de Maçãs é igual à de laranjas\n\n");
   }

   //--

   int idade;

   printf("Digite sua idade: ");
   scanf("%d", &idade);

   if (idade >= 18)
   {
      printf("Você é maior de idade\n\n");
   }
   else
   {
      printf("Você é menor de idade\n\n");
   }

   //--

   float nota;

   printf("Digite a nota: ");
   scanf("%f", &nota);

   if (nota >= 7.0)
   {
      printf("Você foi Aprovado\n\n");
   }
   else
   {
      printf("Você foi Reprovado\n\n");
   }

   return 0;
}