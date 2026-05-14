#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao, numeroSecreto, palpite;

    printf("| MENU PRINCIPAL |\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Regras do Jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:  \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            srand(time(0));
            numeroSecreto = rand() % 10;
            printf("Digite um número de 0 à 9: \n");
            scanf("%d", &palpite);

            if (numeroSecreto == palpite) {
                printf("Parabéns, você acertou!\n");
                printf("O número sorteado é: %d", numeroSecreto);
            } else {
                printf("Infelismente você errou! O número sorteado é: %d", numeroSecreto);
            }
            break;
        case 2:
            printf("| REGRAS DO JOGO |\n");
                printf("01 - Ipsulun case etcIpsulun case etcIpsulun case etcIpsulun case etc\n");
                printf("02 - Ipsulun case etcIpsulun case etcIpsulun case etcIpsulun case etc\n");
                printf("03 - Ipsulun case etcIpsulun case etcIpsulun case etcIpsulun case etc\n");
                printf("04 - Ipsulun case etcIpsulun case etcIpsulun case etcIpsulun case etc\n");
                printf("05 - Ipsulun case etcIpsulun case etcIpsulun case etcIpsulun case etc\n");
            break;
        case 3:
            printf("Saindo do Jogo!\n");
            break;
        default:
            printf("Opção Inválida.");
    }

    return 0;
}