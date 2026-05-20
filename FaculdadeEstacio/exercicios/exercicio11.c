#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"Portuguese");

    int value;

    printf("Digite um número: ");
    scanf("%d", &value);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", value, i, value * i);
    }

    return 0;
}