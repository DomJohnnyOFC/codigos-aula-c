#include <stdio.h>

int main() {
    float placaVideo = 139.00;
    float caixaSom = 99.90;
    float kitMouseTeclado = 149.90;
    float monitor = 679.90;
    float memoriaRAM = 199.90;
    float ssd = 250.90;

    float total, totalVista, parcela;
    float valorPorPessoaVista, valorPorPessoaParcelado;

    total = placaVideo + caixaSom + kitMouseTeclado +
            monitor + memoriaRAM + ssd;

    totalVista = total * 0.85;
    parcela = total / 12;

    valorPorPessoaVista = totalVista / 6;
    valorPorPessoaParcelado = total / 6;

    printf("~~~ ORCAMENTO DO COMPUTADOR GAMER ~~~\n\n");

    printf("Placa de video: R$ %.2f\n", placaVideo);
    printf("Caixa de som: R$ %.2f\n", caixaSom);
    printf("Kit mouse e teclado: R$ %.2f\n", kitMouseTeclado);
    printf("Monitor 21 polegadas: R$ %.2f\n", monitor);
    printf("Memoria RAM: R$ %.2f\n", memoriaRAM);
    printf("SSD 480 GB: R$ %.2f\n", ssd);

    printf("\nValor total: R$ %.2f\n", total);

    printf("\n$$$ PAGAMENTO A VISTA $$$\n");
    printf("Total com 15%% de desconto: R$ %.2f\n", totalVista);
    printf("Valor por pessoa: R$ %.2f\n", valorPorPessoaVista);

    printf("\n$$$ PAGAMENTO PARCELADO! $$$\n");
    printf("12x de R$ %.2f\n", parcela);
    printf("Valor total por pessoa: R$ %.2f\n", valorPorPessoaParcelado);

    return 0;
}