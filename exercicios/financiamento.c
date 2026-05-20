#include <stdio.h>
#include <locale.h>

int main()
{
    float valor = 0;
    float renda = 0;
    float juros = 0;
    float total = 0;
    float parcela = 0;
    int meses;
    int options;

    printf("=== Bom dia, meu caro(a) comprador(a) ===");
    printf("\nvoce esta na Finantech, eu sou o Joao, um Dev Junior");
    printf("\nAqui a gente realiza financiamentos de veiculos e imoveis para voce!");
    printf("\nConfira a lista de opcoes que voce pode financiar");
    printf("\n1 - carro");
    printf("\n2 - moto");
    printf("\n3 - casa");
    printf("\n4 - apartamento");
    printf("\n5 - caminhao");
    printf("\n qual financiamento voce gostaria de aplicar?");

    printf("\nEscolha uma opcao: ");
    scanf("%d", &options);

    printf("\nDigite o valor do item: ");
    scanf("%f", &valor);

    printf("\nDigite sua renda mensal: ");
    scanf("%f", &renda);

    printf("\nDigite o tanto de meses: ");
    scanf("%d", &meses);

    switch (options)
    {
    case 1:
        juros = 0.015;
        total = valor + (valor * juros * meses);
        parcela = total / meses;
        printf("\nFinanciamento de CARRO");

        break;

    case 2:
        juros = 0.015;
        total = valor + (valor * juros * meses);
        parcela = total / meses;

        printf("\nFinanciamento de MOTO");

        break;

    case 3:
        juros = 0.015;
        total = valor + (valor * juros * meses);
        parcela = total / meses;

        printf("\nFinanciamento de CAMINHAO\n");

        break;

    case 4:
        juros = 0.005;
        total = valor + (valor * juros * meses);
        parcela = total / meses;

        printf("\nFinanciamento de APARTAMENTO");

        break;

    case 5:
        juros = 0.005;
        total = valor + (valor * juros * meses);
        parcela = total / meses;

        printf("\nFinanciamento de CASAS");

        return 0;
    }
    printf("Valor total: %.2f\n", total);
    printf("Parcela mensal: %.2f\n", parcela);

    if (parcela <= 0.30)
        ;
    {
        printf("Financiamento APROVADO!\n");
    }

    printf("Parcela: \n");

    for (int i = 1; i <= meses; i++)
        printf("Parcela %d = %.2f\n", i, parcela);

        printf("\ngostaria de adicionar uma entrada?");
        printf("\n6 para sim \n7 para nao");

        printf("\nEscolha uma opcao: ");
        scanf("%d", &options);

        printf("-Desenvolvido por Dom Johnny");
        printf("\nOBS: o recurso de pagar inteiro ou parcelado esta na versao beta");
        printf("\nAguarde uma atualizacao ou mande 50 reais na minha chave pix");
        printf("\nPode parecer que eu fiz isso na zueira mas eu me esforcei nesse codigo :) desculpa se ele ficou ruuim");

    return 0;
}