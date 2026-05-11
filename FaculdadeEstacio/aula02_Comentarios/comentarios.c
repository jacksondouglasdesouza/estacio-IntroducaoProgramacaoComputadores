#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   /*
    *Aqui temos um comentário de múltiplas linhas, que é iniciado com /* e finalizado com
    * Este programa realiza a soma de dois números inteiros. Abaixo está o setlocale,
    * que é utilizado para configurar a localidade do programa, permitindo que ele
    * exiba mensagens e formate números de acordo com as convenções do idioma português.
    */

   setlocale(LC_ALL, "Portuguese");

   //-- Esté é um comentário de uma única linha, que é iniciado com // e continua até o final da linha.

   // Criando variaveis do tipo inteiro, para receber e entregar valores inteiros, ou seja, sem casas decimais.
   int numero_01, numero_02, resultado;

   // Lendo dos números:
   printf("Digite aqui o primeiro número inteiro: ");
   scanf("%d", &numero_01);

   // Lendo o segundo Número:
   printf("Digite aqui o segundo número inteiro: ");
   scanf("%d", &numero_02);

   // Realizando a soma dos números:

   resultado = numero_01 + numero_02;

   // Entregando o resultado:

   printf("O resultado da soma entre %d com %d é igual a: %d", numero_01, numero_02, resultado);
   printf("\nAbraços, até a próxima aula!");

   return 0;
}