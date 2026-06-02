#include <stdio.h>

int main() {
    float distancia;
    float consumoGasolina, consumoEtanol;
    float precoGasolina, precoEtanol;
    float litrosGasolina, litrosEtanol;
    float custoGasolina, custoEtanol;

    printf("Calculadora de Viagem\n");

    printf("Digite a distancia da viagem (km): ");
    scanf("%f", &distancia);

    printf("Digite o consumo do carro com gasolina (km/L): ");
    scanf("%f", &consumoGasolina);

    printf("Digite o consumo do carro com etanol (km/L): ");
    scanf("%f", &consumoEtanol);

    printf("Digite o preco da gasolina (R$/L): ");
    scanf("%f", &precoGasolina);

    printf("Digite o preco do etanol (R$/L): ");
    scanf("%f", &precoEtanol);

    litrosGasolina = distancia / consumoGasolina;
    litrosEtanol = distancia / consumoEtanol;

    custoGasolina = litrosGasolina * precoGasolina;
    custoEtanol = litrosEtanol * precoEtanol;

    printf("\n$$$ Resultado $$$\n");
    printf("Gasto com gasolina: R$ %.2f\n", custoGasolina);
    printf("Gasto com etanol: R$ %.2f\n", custoEtanol);

    if (custoGasolina < custoEtanol) {
        printf("A gasolina e a opcao mais vantajosa.\n");
    } else if (custoEtanol < custoGasolina) {
        printf("O etanol e a opcao mais vantajosa.\n");
    } else {
        printf("Ambos os combustiveis possuem o mesmo custo.\n");
    }

    return 0;
}