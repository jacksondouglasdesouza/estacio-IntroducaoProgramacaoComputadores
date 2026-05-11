#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   //--
   float nota1, nota2, nota3, mediaAluno;

   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);

   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   printf("Digite a terceira nota: ");
   scanf("%f", &nota3);

   mediaAluno = (nota1 + nota2 + nota3) / 3;

   printf("A média aritmética do aluno é: %.2f\n", mediaAluno);

   return 0;
}