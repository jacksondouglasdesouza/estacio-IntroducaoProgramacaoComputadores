#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;

    printf("| MENU PRINCIPAL |\n");
    printf("1 . Iniciar o Jogo\n");
    printf("2 . Ver regras\n");
    printf("3 . Sair\n");
    printf("Escolha um opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Execução do Jogo\n");
            break;
        case 2:
            printf("| REGRAS DO JOGO |");
            break;
        case 3:
            printf("Saindo do jogo ...");
            break;
        default:
            printf("Opção Inválida!");
    }

    return 0;
}