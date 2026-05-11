#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Printf e Scanf //

   char nomeUsuario[50] = "Jackson Douglas";
   int idadeUsuario;
   float alturaUsuario;
   char nomeGato[50] = " ";
   char escolhaOpcao = ' ';
   char nomeFilhoUsuario[100];

   //-- ESPECIFICADORES DE FORMATO --
   // %d - inteiro
   // %i - inteiro
   // %f - ponto flutuante
   // %c - caractere
   // %s - string
   // %lf - double
   // %e - notacao cientifica
   // %x - hexadecimal

   printf("Bem vindo >>> %s <<< \n", nomeUsuario);

   printf("Digite a sua idade: ");
   scanf("%d", &idadeUsuario);

   printf("Digite a sua altura: ");
   scanf("%f", &alturaUsuario);

   printf("Digite o nome do seu gato: ");
   scanf("%s", nomeGato);

   printf("Digite a sua escolha de opção (S/N): ");
   scanf(" %c", &escolhaOpcao);
   // Adicionando um espaço antes do %c para consumir o caractere de nova linha deixado pelo scanf anterior

   while (getchar() != '\n')
      ; // Limpa o buffer de entrada para evitar problemas com fgets

   printf("Digite o nome completo do seu filho: ");
   fgets(nomeFilhoUsuario, sizeof(nomeFilhoUsuario), stdin);
   nomeFilhoUsuario[strcspn(nomeFilhoUsuario, "\n")] = '\0';

   //-- Imprimindo os valores digitados --

   printf("A idade digitada foi: [ %d ] anos\n", idadeUsuario);
   printf("A altura digitada foi: [ %.2f ] metros\n", alturaUsuario);
   printf("O nome do seu gato é: [ %s ]\n", nomeGato);
   printf("A sua escolha de opção foi: [ %c ]\n", escolhaOpcao);
   printf("O nome completo do filho de >>> %s <<< é: [ %s ]\n", nomeUsuario, nomeFilhoUsuario);

   return 0;
}