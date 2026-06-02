#include <stdio.h>

float calcular(char operacao, float num1, float num2) {
    switch (operacao) {
        case '+':
            return num1 + num2;

        case '-':
            return num1 - num2;

        case '*':
            return num1 * num2;

        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                printf("Erro: divisao por zero!\n");
                return 0;
            }

        default:
            printf("Operacao invalida!\n");
            return 0;
    }
}

int main() {
    char op;
    float a, b;

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    printf("Resultado: %.2f\n", calcular(op, a, b));

    return 0;
}