#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int inteiroA = 10;
   int inteiroB = 3;
   int soma = inteiroA + inteiroB;
   int diferenca = inteiroA - inteiroB;
   int produto = inteiroA * inteiroB;
   int quociente = inteiroA / inteiroB; // Se não for exato, ela vai pegar somente a parte inteira do resultado

   //--

   printf("Soma: %d\n", soma);
   printf("Diferença: %d\n", diferenca);
   printf("Produto: %d\n", produto);
   printf("Quociente: %d\n", quociente);

   float floatA = 5.5;
   float floatB = 2.2;
   float somaFloat = floatA + floatB;
   float diferencaFloat = floatA - floatB;
   float produtoFloat = floatA * floatB;
   float quocienteFloat = floatA / floatB;

   printf("\nSoma: %.2f\n", somaFloat);
   printf("Diferença: %.2f\n", diferencaFloat);
   printf("Produto: %.2f\n", produtoFloat);
   printf("Quociente: %.2f\n\n", quocienteFloat);

   // Fazendo o casting para obter o resultado exato do quociente
   // Conversão explícita (casting)
   float quocienteCasting = (float)inteiroA / inteiroB;

   printf("Quociente com casting: %.2f\n", quocienteCasting);

   /********** IMPORTANTE: **********
    * O casting é uma forma de forçar a conversão de um tipo de dado para outro.
    * No exemplo acima, estamos convertendo o inteiroA para float antes de realizar a divisão, garantindo que o resultado seja um número de ponto flutuante com a parte decimal correta.
    * Sem o casting, a divisão entre inteiros resultaria em um inteiro, e depois seria convertido para float, perdendo a parte decimal.
    */
   // Conversão implícita (sem casting) é perigoso, pois pode ocorrer perda de dados
   float resultadoImplicito = inteiroA / inteiroB;
   printf("Resultado sem casting (implícito): %.2f\n\n", resultadoImplicito);
   // Note que o resultado sem casting é 3.00, pois a divisão entre inteiros resulta em um inteiro, e depois é convertido para float, perdendo a parte decimal.

   return 0;
}