#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /**
    * Quantos grãos de trigo a rainha pagou ao monge?
    * Uma rainha requisitou os serviços de um monge e disse-lhe que pagaria qualquer preço.
    * O monge, necessitando de alimentos, indagou à rainha sobre o pagamento, se poderia ser
    * feito com grãos de trigo dispostos em um tabuleiro de xadrez (que possui 64 casas), de tal
    * forma que o primeiro quadro deveria conter apenas um grão e os quadros subsequentes, o dobro do quadro anterior.
    * Crie um programa para calcular o total de grãos de trigo que o monge recebeu.
    */

   unsigned long long TotalGraos = 0;
   unsigned long long GraosPrimeiroQuadro = 1;

   for (int i = 0; i < 64; i++)
   {
      TotalGraos += GraosPrimeiroQuadro;
      GraosPrimeiroQuadro *= 2;
   }

   printf("O total de grãos de trigo que o monge recebeu foi: %llu\n", TotalGraos);

   return 0;
}