#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int numero01, numero02;

   printf("Digite o primeiro número: ");
   scanf("%d", &numero01);
   printf("Digite o segundo número: ");
   scanf("%d", &numero02);

   if (numero01 > numero02)
   {
      printf("O número [ 1 ] = %d é maior que o número [ 2 ] = %d\n", numero01, numero02);
   }
   else if (numero01 < numero02)
   {
      printf("O número [ 1 ] = %d é menor que o número [ 2 ] = %d\n", numero01, numero02);
   }
   else
   {
      printf("O número [ 1 ] = %d é igual ao número [ 2 ] = %d\n", numero01, numero02);
   }

   //--

   float temperatura = 32.5;

   if (temperatura >= 30.0)
   {
      printf("A temperatura de %.1f°C é considerada quente.\n", temperatura);
   }
   else
   {
      printf("A temperatura de %.1f°C é considerada fria.\n", temperatura);
   }

   //--

   float notaAluno01, notaAluno02, media;

   printf("Digite a primeira nota do aluno: ");
   scanf("%f", &notaAluno01);

   printf("Digite a segunda nota do aluno: ");
   scanf("%f", &notaAluno02);

   media = (notaAluno01 + notaAluno02) / 2;

   if (media >= 6.0)
   {
      printf("O aluno foi aprovado com média %.1f\n", media);
   }
   else
   {
      printf("O aluno foi reprovado com média %.1f\n", media);
   }

   return 0;
}