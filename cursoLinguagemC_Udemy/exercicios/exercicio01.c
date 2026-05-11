#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
   Exercício 01 - Como ler no teclado sexo, idade, peso e altura?
   - Crie um programa que leia do teclado o sexo, a idade, o peso e a altura de uma pessoa.
   - O programa deve exibir os dados lidos na tela.
   */

   char sexoUsuario;
   int idadeUsuario;
   float pesoUsuario, alturaUsuario;

   printf("Digite o seu sex (M/F): ");
   scanf("%c", &sexoUsuario);

   printf("Digite a sua idade: ");
   scanf("%d", &idadeUsuario);

   printf("Digite o seu peso: ");
   scanf("%f", &pesoUsuario);

   printf("Digite a sua altura: ");
   scanf("%f", &alturaUsuario);

   //--

   printf("\nDados do usuário:\n");

   printf("Sexo: %c\n", sexoUsuario);
   printf("Idade: %d\n", idadeUsuario);
   printf("Peso: %.2f\n", pesoUsuario);
   printf("Altura: %.2f\n\n", alturaUsuario);

   return 0;
}