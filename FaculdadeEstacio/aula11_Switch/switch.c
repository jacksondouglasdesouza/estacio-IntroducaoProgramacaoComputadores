#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int valor;
    printf("Digite um valor entre [ 1 e 12 ]: ");
    scanf("%d", &valor);

    switch (valor) {
        case 1:
            printf("O valor %d escolhido representa o mês de [ Janeiro ]", valor);
            break;
        case 2:
            printf("O valor %d escolhido representa o mês de [ Fevereiro ]", valor);
            break;
        case 3:
            printf("O valor %d escolhido representa o mês de [ Março ]", valor);
            break;
        case 4:
            printf("O valor %d escolhido representa o mês de [ Abril ]", valor);
            break;
        case 5:
            printf("O valor %d escolhido representa o mês de [ Maio ]", valor);
            break;
        case 6:
            printf("O valor %d escolhido representa o mês de [ Junho ]", valor);
            break;
        case 7:
            printf("O valor %d escolhido representa o mês de [ Julho ]", valor);
            break;
        case 8:
            printf("O valor %d escolhido representa o mês de [ Agosto ]", valor);
            break;
        case 9:
            printf("O valor %d escolhido representa o mês de [ Setembro ]", valor);
            break;
        case 10:
            printf("O valor %d escolhido representa o mês de [ Outubro ]", valor);
            break;
        case 11:
            printf("O valor %d escolhido representa o mês de [ Novembro ]", valor);
            break;
        case 12:
            printf("O valor %d escolhido representa o mês de [ Dezembro ]", valor);
            break;
        default:
            printf("O valor não corresponde ao esperado.");
    }

    return 0;
}