#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   // Umidade, temperatura, estoque!

   float umidade, temperatura;
   unsigned int estoque, estoqueMinimo = 1000;

   printf("Digite a temperatura: ");
   scanf("%f", &temperatura);

   printf("Digite a Umidade: ");
   scanf("%f", &umidade);

   printf("Digite o estoque: ");
   scanf("%u", &estoque);

   if (temperatura > 30)
   {
      printf("Temperatura alta, cuidado com os produtos!\n");
   }
   else
   {
      printf("Temperatura dentro do limite, continue monitorando.\n");
   }

   //--

   if (umidade > 50)
   {
      printf("Umidade alta, cuidado com os produtos!\n");
   }
   else
   {
      printf("Umidade dentro do limite, continue monitorando.\n");
   }

   //--

   if (estoque < estoqueMinimo)
   {
      printf("Estoque baixo, reabasteça em breve!\n");
   }
   else
   {
      printf("Estoque suficiente, continue monitorando.\n");
   }

   return 0;
}