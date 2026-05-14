#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int opcao;
    float saldo = 10000, saque;
    int idBancario, agencia, conta;

    printf("ESCOLHA UMA OPÇÃO: \n");
    printf("1. Verificar saldo: \n");
    printf("2. Fazer depósitos: \n");
    printf("3. Fazer saque: \n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("O seu saldo é: R$%.2f \n", saldo);
            break;
        case 2:
            printf("Digite o código bancário: \n");
            printf("Digite a número da agência: \n");
            printf("Digite o número da conta: \n");
            scanf("%d%d%d", &idBancario, &agencia, &conta);
            break;
        case 3:
            printf("Digite o valor de saque: \n");
            scanf("%f", &saque);
            break;
        default:
            printf("Opção inválida!");
    }

    return 0;
}