#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "Portuguese");

   /*
      Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:
      Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
      Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
      Nome da Cidade: O nome da cidade. Tipo: char[] (string)
      População: O número de habitantes da cidade. Tipo: int
      Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
      PIB: O Produto Interno Bruto da cidade. Tipo: float
      Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
      Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.
   */

   char estado1, estado2;

   char idCarta1[10] = "A01";
   char idCarta2[10] = "B02";

   char nomeCidade1[50];
   char nomeCidade2[50];

   unsigned long int populacaoCidade1, populacaoCidade2;
   float areaCidade1, areaCidade2;
   float pibCidade1, pibCidade2;
   int pontosTuristicosCidade1, pontosTuristicosCidade2;

   printf("\nBem-vindo ao cadastro de cartas do Super Trunfo Cidades!\n\n");

   //-- ENTRADAS DA CARTA 01 --//

   printf("| Digite os dados da Carta 01 |\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado1);
   getchar();

   printf("Código da Carta (ex: A01 - A04): ");
   fgets(idCarta1, sizeof(idCarta1), stdin);
   idCarta1[strcspn(idCarta1, "\n")] = '\0';

   printf("Nome da Cidade: ");
   fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
   nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

   printf("População: ");
   scanf("%d", &populacaoCidade1);
   printf("Área (em km²): ");
   scanf("%f", &areaCidade1);
   printf("PIB: ");
   scanf("%f", &pibCidade1);
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicosCidade1);
   getchar();

   //-- ENTRADAS DA CARTA 02 --//

   printf("\n| Digite os dados da Carta 02 |\n");
   printf("Estado (A-H): ");
   scanf(" %c", &estado2);
   getchar();

   printf("Código da Carta (ex: E01 - H04): ");
   fgets(idCarta2, sizeof(idCarta2), stdin);
   idCarta2[strcspn(idCarta2, "\n")] = '\0';

   printf("Nome da Cidade: ");
   fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
   nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

   printf("População: ");
   scanf("%d", &populacaoCidade2);
   printf("Área (em km²): ");
   scanf("%f", &areaCidade2);
   printf("PIB: ");
   scanf("%f", &pibCidade2);
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTuristicosCidade2);
   getchar();

   /* CALCULO DENSIDADE POPULACIONAL E PIB PER CAPITA */

   float densidadePopulacional01 = (float)populacaoCidade1 / areaCidade1;
   float densidadePopulacional02 = (float)populacaoCidade2 / areaCidade2;
   // Estou multiplicando o PIB por 1 bilhão (1000000000.0) para converter a saida no formato do exemplo do exercício.
   float pibPerCapitaCidade1 = (pibCidade1 * 1000000000.0) / (float)populacaoCidade1;
   float pibPerCapitaCidade2 = (pibCidade2 * 1000000000.0) / (float)populacaoCidade2;

   // -- Cálculo - SUPER PODER -- //

   float superPoderCidade1 = populacaoCidade1 + areaCidade1 + pibCidade1 + pontosTuristicosCidade1 + pibPerCapitaCidade1 + (1 / densidadePopulacional01);
   float superPoderCidade2 = populacaoCidade2 + areaCidade2 + pibCidade2 + pontosTuristicosCidade2 + pibPerCapitaCidade2 + (1 / densidadePopulacional02);

   //-- SAÍDAS DA CARTA 01 --//

   printf("----------------------------------------\n");
   printf("|   Carta 01   |\n");
   printf("Estado: %c\n", estado1);
   printf("Código da Carta: %s\n", idCarta1);
   printf("Nome da Cidade: %s\n", nomeCidade1);
   printf("População: %d\n", populacaoCidade1);
   printf("Área: %.2f km²\n", areaCidade1);
   printf("PIB: %.2f bilhões de R$\n", pibCidade1);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade1);
   printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional01);
   printf("PIB per Capita: %.2f R$\n", pibPerCapitaCidade1);
   printf("Super Poder: %.2f\n", superPoderCidade1);
   printf("Densidade Populacional Invertida: %.6f\n\n", 1 / densidadePopulacional01);
   //-- SAÍDAS DA CARTA 02 --//

   printf("----------------------------------------\n");
   printf("|   Carta 02   |\n");
   printf("Estado: %c\n", estado2);
   printf("Código da Carta: %s\n", idCarta2);
   printf("Nome da Cidade: %s\n", nomeCidade2);
   printf("População: %d\n", populacaoCidade2);
   printf("Área: %.2f km²\n", areaCidade2);
   printf("PIB: %.2f bilhões de R$\n", pibCidade2);
   printf("Número de Pontos Turísticos: %d\n", pontosTuristicosCidade2);
   printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional02);
   printf("PIB per Capita: %.2f R$\n", pibPerCapitaCidade2);
   printf("Super Poder: %.2f\n", superPoderCidade2);
   printf("Densidade Populacional Invertida: %.6f\n\n", 1 / densidadePopulacional02);

   //-- SAIDA DAS COMPARAÇÃO DA CARTAS --//

   /* Parte 01 - comparação básica sem estruturas de comparação.

   printf("----------------------------------------\n\n");
   printf("| Comparação entre as Cartas |\n");
   printf("População: Carta %d venceu %d\n", (populacaoCidade1 > populacaoCidade2), (populacaoCidade1 > populacaoCidade2));
   printf("Área: Carta %d venceu %d\n", (areaCidade1 > areaCidade2), (areaCidade1 > areaCidade2));
   printf("PIB: Carta %d venceu %d\n", (pibCidade1 > pibCidade2), (pibCidade1 > pibCidade2));
   printf("Número de Pontos Turísticos: Carta %d venceu %d\n", (pontosTuristicosCidade1 > pontosTuristicosCidade2), (pontosTuristicosCidade1 > pontosTuristicosCidade2));
   printf("Densidade Populacional: Carta %d venceu %d\n", (densidadePopulacional01 > densidadePopulacional02), (densidadePopulacional01 > densidadePopulacional02));
   printf("PIB per Capita: Carta %d venceu %d\n", (pibPerCapitaCidade1 > pibPerCapitaCidade2), (pibPerCapitaCidade1 > pibPerCapitaCidade2));
   printf("Super Poder: Carta %d venceu %d\n\n", (superPoderCidade1 > superPoderCidade2), (superPoderCidade1 > superPoderCidade2));
   */

   /** Parte 02 - comparação com estrutura de comparação

   printf("----------------------------------------\n\n");
   printf("| Comparação entre as Cartas (Atributo: População) |\n");
   printf("Carta 01 - %s: %u\n", nomeCidade1, populacaoCidade1);
   printf("Carta 02 - %s: %u\n", nomeCidade2, populacaoCidade2);

   if (populacaoCidade1 > populacaoCidade2)
   {
      printf("Resultado: Carta 01 (%s) venceu!\n\n", nomeCidade1);
   }
   else
   {
      printf("Resultado: Carta 02 (%s) venceu!\n\n", nomeCidade2);
   }

   */

   /** Parte 03 - comparação com estrutura switch Case*/

   float densidadePopulacionalInvertida_01 = 1 / densidadePopulacional01;
   float densidadePopulacionalInvertida_02 = 1 / densidadePopulacional02;

   int escolha;

   printf("| Comparação entre Cartas |\n");
   printf("Escolha qual atributo deseja comparar\n");
   printf("01 . População:  \n");
   printf("02 . Área:  \n");
   printf("03 . Pib:  \n");
   printf("04 . Pontos Turísticos:  \n");
   printf("05 . Densidade Populacional:  \n");
   printf("06 . Pib Per Capita:  \n");
   printf("07 . Super Poder da Carta:  \n");
   printf("08 . Sair:  \n\n");
   scanf("%d", &escolha);

   switch (escolha)
   {
   case 1:
      if (populacaoCidade1 > populacaoCidade2)
      {
         printf("A população da [ Carta 01 ] é a campeã!\n");
      }
      else if (populacaoCidade2 > populacaoCidade1)
      {
         printf("A população da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas em sua população!\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s", nomeCidade1);
      printf("\tPopulação: %d\n\n", populacaoCidade1);

      printf("Cidade 02: %s", nomeCidade2);
      printf("\tPopulação: %d\n\n", populacaoCidade2);
      break;
   case 2:
      if (areaCidade1 > areaCidade2)
      {
         printf("A área da [ Carta 01 ] é a campeã!\n");
      }
      else if (areaCidade2 > areaCidade1)
      {
         printf("A área da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas em sua área geográfica!\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s ->", nomeCidade1);
      printf("\tÁrea: %.2f km²\n\n", areaCidade1);

      printf("Cidade 02: %s ->", nomeCidade2);
      printf("\tÁrea: %.2f km²\n\n", areaCidade2);
      break;
   case 3:
      if (pibCidade1 > pibCidade2)
      {
         printf("O PIB da [ Carta 01 ] é a campeã!\n");
      }
      else if (pibCidade2 > pibCidade1)
      {
         printf("O PIB da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas no seu PIB!\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s ->", nomeCidade1);
      printf("\tPIB R$: %.2f bilhões\n\n", pibCidade1);
      printf("Cidade 02: %s ->", nomeCidade2);
      printf("\tPIB R$: %.2f bilhões\n\n", pibCidade2);
      break;
   case 4:
      if (pontosTuristicosCidade1 > pontosTuristicosCidade2)
      {
         printf("A [ Carta 01 ] é a campeã!\n");
      }
      else if (pontosTuristicosCidade2 > pontosTuristicosCidade1)
      {
         printf("A [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas!\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s", nomeCidade1);
      printf("\tPontos Turísticos: %d\n\n", pontosTuristicosCidade1);

      printf("Cidade 02: %s", nomeCidade2);
      printf("\tPontos Turísticos: %d\n\n", pontosTuristicosCidade2);
      break;
   case 5:
      if (densidadePopulacionalInvertida_01 < densidadePopulacionalInvertida_02)
      {
         printf("A Densidade Populacional da [ Carta 01 ] é a campeã!\n");
      }
      else if (densidadePopulacionalInvertida_02 < densidadePopulacionalInvertida_01)
      {
         printf("A Densidade Populacional da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas em sua Densidade Populacional\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s ->", nomeCidade1);
      printf("\tDensidade Populacional: %.8f habitantes/km²\n\n", densidadePopulacionalInvertida_01);

      printf("Cidade 02: %s ->", nomeCidade2);
      printf("\tDensidade Populacional: %.8f habitantes/km²\n\n", densidadePopulacionalInvertida_02);
      break;
   case 6:
      if (pibPerCapitaCidade1 > pibPerCapitaCidade2)
      {
         printf("O PIB PER CAPTA da [ Carta 01 ] é a campeã!\n");
      }
      else if (pibPerCapitaCidade2 > pibPerCapitaCidade1)
      {
         printf("O PIB PER CAPTA da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas no seu PIB PER CAPTA!\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s ->", nomeCidade1);
      printf("\tPIB PER CAPTA R$: %.2f\n\n", pibPerCapitaCidade1);
      printf("Cidade 02: %s ->", nomeCidade2);
      printf("\tPIB PER CAPTA R$: %.2f\n\n", pibPerCapitaCidade2);
      break;
   case 7:
      if (superPoderCidade1 > superPoderCidade2)
      {
         printf("O Super Poder da [ Carta 01 ] é a campeã!\n");
      }
      else if (superPoderCidade2 > superPoderCidade1)
      {
         printf("O Super Poder da [ Carta 02 ] é a campeã!\n");
      }
      else
      {
         printf("As cartas estão empatadas em seus Super Poderes\n");
      }
      printf("Veja os dados comparativos para definir o resultado: \n\n");
      printf("Cidade 01: %s ->", nomeCidade1);
      printf("\tSuper Poder: %.2f\n\n", superPoderCidade1);

      printf("Cidade 02: %s ->", nomeCidade2);
      printf("\tSuper Poder:: %.2f\n\n", superPoderCidade2);
      break;
   case 8:
      printf("Saindo do Jogo ...");
      break;
   default:
      printf("Opção Inválida");
   }

   return 0;
}