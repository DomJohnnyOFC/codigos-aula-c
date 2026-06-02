#include <stdio.h>
#include <locale.h>

float calcularArea(char figura, float medida) {
    if (figura == 'C') { // Círculo
        return 3.14 * medida * medida;
    } else if (figura == 'Q') { // Quadrado
        return medida * medida;
    }

    return -1; // Figura inválida
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char figura;
    float medida;

    printf("Digite C para círculo ou Q para quadrado: ");
    scanf(" %c", &figura);

    printf("Digite o raio ou o lado: ");
    scanf("%f", &medida);

    printf("Área = %.2f\n", calcularArea(figura, medida));

    return 0;
}