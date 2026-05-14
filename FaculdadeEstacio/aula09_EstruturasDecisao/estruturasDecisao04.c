#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   int idade;

   printf(("Digite a sua idade: "));
   scanf("%d", &idade);

   if (idade < 12){
      printf("Você é Criança\n");
   } else if (idade >= 12 && idade < 18){
      printf("Você é Adolescente\n");
   } else if (idade >= 18 && idade < 60){
      printf("Você é Adulto\n");
   } else{
      printf("Você é Idoso\n");
   }

   //--

   float nota;

   printf("Digite a sua nota: ");
   scanf("%f", &nota);

   if (nota >= 90) {
      printf("Conceito A!\n");
   } else if (nota >= 80 && nota < 90) {
      printf("Conceito B!\n");
   } else if (nota >= 70 && nota < 80) {
      printf("Conceito C!\n");
   } else if (nota >= 60 && nota < 70) {
      printf("Conceito D!\n");
   } else {
      printf("Conceito E!\n");
   }

   return 0;
}