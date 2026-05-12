#include <stdio.h>

int main()
{
    int opcao;
    float total = 0;

    char Pizzas[50][20] = {
        "Flango",
        "Ratão",
        "Pirarucu",
        "Fusca",
        "Cereal com salsicha",
    };

    float precos[5] = {15.0, 18.0, 20.0, 14.0, 67.0};

    printf("=== Bem-vindo ao Pará Pizzas! ===\n");
    printf("OBS:nao temos refrigerante, se vc nao gostou entao some daqui!");

    do {
        printf("\nEscolha uma Pizza:\n");

        for (int i = 0; i < 5; i++) {
            printf("%d - %s (R$ %.2f)\n", i + 1, Pizzas[i], precos[i]);
        }

        printf("0 - Finalizar pedido\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5) {
            printf("Voce escolheu: %s\n", Pizzas[opcao - 1]);
            total += precos[opcao - 1];
            printf("Total parcial: R$ %.2f\n", total);
        } 
        else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    printf("\n=== Pedido finalizado ===\n");
    printf("Total a pagar: R$ %.2f\n", total);

    return 0;
}