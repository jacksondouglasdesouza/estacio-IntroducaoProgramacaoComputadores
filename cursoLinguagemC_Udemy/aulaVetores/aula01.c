#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");
   srand(time(NULL));

   // Aula 01 - Vetores - Array unidimensional

   int vetor[50];

   for (int i = 0; i < 50; i++)
   {
      vetor[i] = i + 1;
      printf("vetor[%d] = %d\n", i, vetor[i]);
   }

   //--

   printf("\n");

   char letras[30];

   for (int i = 0; i < 30; i++)
   {
      int charSorteio = rand() % 2;
      letras[i] = charSorteio == 0 ? 'A' : 'b';
      printf("letras[%d] = %c\n", i, letras[i]);
   }

   //--

   char outroChar[100] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', '1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
   double notasAlunos[10] = {10.0, 9.0, 8.0, 7.0, 6.0, 5.0, 4.0, 3.0, 2.0, 1.0};
   double somaNotasAlunos = 0.0;
   double mediaALunos = 0.0;
   int tamanhoVetor = sizeof(notasAlunos) / sizeof(notasAlunos[0]);

   for (int i = 0; i < tamanhoVetor; i++)
   {
      somaNotasAlunos += notasAlunos[i];
   }

   mediaALunos = somaNotasAlunos / tamanhoVetor;

   printf("A média das notas dos alunos é: %.1f\n", mediaALunos);

   //--

   int number[5];

   for (int i = 0; i < 5; i++)
   {
      printf("Digite um numero inteiro: ");
      scanf("%d", &number[i]);
   }

   printf("\n");

   for (int i = 0; i < 5; i++)
   {
      printf("O numero %d é: %d\n", i + 1, number[i]);
   }

   printf("\n");

   //--

   unsigned int numerosSorteados[100];

   for (int i = 0; i < 100; i++)
   {
      numerosSorteados[i] = rand() % 100;
   }

   for (int i = 0; i < 100; i++)
   {
      printf("numerosSorteados[%d] = %d\n", i + 1, numerosSorteados[i]);
   }

   return 0;
}