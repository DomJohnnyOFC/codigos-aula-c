#include <stdio.h>

int main() {
    float anualViva = 12 * 39.99;
    float anualSaude = 12 * 48.99;
    float anualFitness = 12 * 58.99;

    printf("$ COMPARACAO DE ACADEMIAS $\n\n");

    printf("Viva Saude\n");
    printf("Mensalidade: R$ 49.99\n");
    printf("Plano anual: R$ %.2f\n", anualViva);
    printf("Uso: 3 vezes por semana\n\n");

    printf("Saude em Dia\n");
    printf("Mensalidade: R$ 39.99\n");
    printf("Plano anual: R$ %.2f\n", anualSaude);
    printf("Uso: 4 vezes por semana\n\n");

    printf("Fitness Pro\n");
    printf("Mensalidade: R$ 69.99\n");
    printf("Plano anual: R$ %.2f\n", anualFitness);
    printf("Uso: ilimitado\n\n");

    if (anualViva < anualSaude && anualViva < anualFitness) {
        printf("Cara, a que mais compensa no plano anual e a Viva Saude, vai nela que nao tem erro.\n");
    } else if (anualSaude < anualFitness) {
        printf("Cara, a que mais compensa no plano anual e a Saude em Dia, vai nela que nao tem erro.\n");
    } else {
        printf("Cara, a que mais compensa no plano anual e a Fitness Pro, vai nela que nao tem erro.\n");
    }

    return 0;
}