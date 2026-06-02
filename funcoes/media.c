#include <stdio.h>
#include <locale.h>

void ola() {
    printf("Olá, seja bem-vindo!\n");
}

void calcularMedia(float n1, float n2) {
    float media = n1 + n2 / 2;
    printf("A média é: %.2f\n", media);
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    ola(); //Executando a função
    printf("Vamos calcular a média das suas notas.\n");
    float n1, n2;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    calcularMedia(n1, n2);

    return 0;
}