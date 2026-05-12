#include <stdio.h>

int main() {
    int pessoas;
    int total_salgados;
    float total_litros;

    float preco_salgado;
    float preco_litro;

    printf("Digite o numero de pessoas: ");
    scanf("%d", &pessoas);

    if (pessoas <= 0) {
        printf("Numero de pessoas invalido!\n");
        return 1;
    }

    printf("Digite o total de salgadinhos: ");
    scanf("%d", &total_salgados);

    printf("Digite o total de litros de bebida: ");
    scanf("%f", &total_litros);

    printf("Digite o preco de 1 salgado: ");
    scanf("%f", &preco_salgado);

    printf("Digite o preco por litro de bebida: ");
    scanf("%f", &preco_litro);

    // cálculos por pessoa
    float salgados_por_pessoa = (float) total_salgados / pessoas;
    float litros_por_pessoa = total_litros / pessoas;

    // custos
    float custo_salgados = total_salgados * preco_salgado;
    float custo_bebida = total_litros * preco_litro;
    float custo_total = custo_salgados + custo_bebida;

    printf("\n--- RESULTADO DA FESTA ---\n");
    printf("Salgados por pessoa: %.2f\n", salgados_por_pessoa);
    printf("Litros por pessoa: %.2f\n", litros_por_pessoa);

    printf("\n--- CUSTOS ---\n");
    printf("Custo dos salgados: R$ %.2f\n", custo_salgados);
    printf("Custo das bebidas: R$ %.2f\n", custo_bebida);
    printf("CUSTO TOTAL DA FESTA: R$ %.2f\n", custo_total);

    return 0;
}