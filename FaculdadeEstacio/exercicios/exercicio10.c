#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int numero;

    do{
        printf("Digite um numero par para sair do programa: ");
        scanf("%d", &numero);

        if (numero % 2 == 0) {
            printf("O numero %d é par\n", numero);
        } else {
            printf("O numero %d é impar\n", numero);
        }

    } while (numero % 2 != 0);

    printf("Você digitou um número par, finalizando o programa...\n");
    return 0;
}