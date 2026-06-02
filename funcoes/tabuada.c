#include <stdio.h>

void tabuada(int numero, int inicio, int fim) {
    for (int i = inicio; i <= fim; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
}

int main() {
    int numero, inicio, fim;

    printf("Digite o numero da tabuada: ");
    scanf("%d", &numero);

    printf("Digite o inicio: ");
    scanf("%d", &inicio);

    printf("Digite o fim: ");
    scanf("%d", &fim);

    tabuada(numero, inicio, fim);

    return 0;
}