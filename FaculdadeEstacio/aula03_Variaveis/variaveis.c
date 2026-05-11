#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Aula de Variáveis
   // Variáveis são espaços na memória do computador onde podemos armazenar dados temporariamente durante a execução de um programa.
   int idade = 25;              // variável do tipo inteiro
   float altura = 1.75;         // variável do tipo ponto flutuante
   double salario = 50000000.0; // variável do tipo ponto flutuante maior que float
   char letra = 'A';            // variável do tipo caractere
   char nome[20] = "João";      // variável do tipo string (array de caracteres)
   float qualquer;              // Variável não inicializada, pode conter lixo na memória

   /** Não pode:
    * int 1numero; // Variavível não pode começar com número
    * float altura@; // Variável não pode conter caracteres especiais
    * char nome completo; // Variável não pode conter espaços
    * int idade = 25; // Variável não pode ter o mesmo nome de outra variável já declarada
    * int int = 35; | Não pode usar palavras reservadas como nome de variável
    */

   printf("Nome: %s\n", nome);
   printf("Idade: %d anos\n", idade);
   printf("Altura: %.2f\n", altura);
   printf("Salário: %.2f\n", salario);
   printf("Letra: %c\n", letra);
   printf("Qualquer: %.2f\n", qualquer); // Variável não inicializada, pode conter lixo na memória

   return 0;
}