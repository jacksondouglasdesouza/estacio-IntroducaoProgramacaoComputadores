#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Operador ternário: condição ? expressão1 : expressão2
   int idadeUsuario;

   printf("Digite a idade do usuário: ");
   scanf("%d", &idadeUsuario);

   idadeUsuario >= 18 ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n");

   //--

   float temperatura;

   printf("Digite a temperatura em Celsius: ");
   scanf("%f", &temperatura);

   temperatura >= 30.0 ? printf("Está quente\n") : printf("Está frio\n");

   return 0;
}