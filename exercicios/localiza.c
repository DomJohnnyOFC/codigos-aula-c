#include <stdio.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    int cupomValido = 0;

    char nome[30];
    char carro[30];

    float totalPorkm = 0;
    float totalPordia = 0;
    float valorDesconto = 0;
    float valorFinal = 0;

    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    char cupons[3][30] = {
        "JVT_10",
        "JVT_20",
        "JVT_30"
    };

    char cupomCliente[30];
    char temCupom;

    printf("Olá, seja bem vindo, qual seu nome? ");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa lojinha, %s\n", nome);

    printf("Qual carro você deseja alugar? ");
    scanf("%s", carro);

    printf("Carro escolhido: %s\n", carro);

    printf("\nQuantos KMs você vai rodar com o carro? ");
    scanf("%i", &km);

    printf("Quantos dias vai precisar do carro? ");
    scanf("%i", &dias);

    totalPorkm = km * VALOR_POR_KM;
    totalPordia = dias * VALOR_POR_DIA;

    valorFinal = totalPordia;

    printf("\nVocê possui cupom de desconto? (s/n) ");
    scanf(" %c", &temCupom);

    if (temCupom == 's' || temCupom == 'S')
    {
        printf("Digite o cupom: ");
        scanf("%s", cupomCliente);

        for (int i = 0; i < 3; i++)
        {
            if (strcmp(cupomCliente, cupons[i]) == 0)
            {
                cupomValido = 1;
            }
        }

        if (cupomValido == 1)
        {
            if (strcmp(cupomCliente, "JVT_10") == 0)
            {
                valorDesconto = totalPordia * 0.10;
            }

            if (strcmp(cupomCliente, "JVT_20") == 0)
            {
                valorDesconto = totalPordia * 0.20;
            }

            if (strcmp(cupomCliente, "JVT_30") == 0)
            {
                valorDesconto = totalPordia * 0.30;
            }

            valorFinal = totalPordia - valorDesconto;

            printf("\nCupom aplicado com sucesso!");
            printf("\nDesconto: R$ %.2f", valorDesconto);
        }
        else
        {
            printf("\nCupom inválido.");
        }
    }
    else
    {
        printf("\nSem cupom de desconto.");
    }

    printf("\n\n%s, segue um relatório:", nome);

    printf("\nCarro alugado: %s", carro);
    printf("\nTotal por KM: R$ %.2f", totalPorkm);
    printf("\nTotal por DIA: R$ %.2f", totalPordia);
    printf("\nValor final: R$ %.2f", valorFinal);

    if (totalPordia < totalPorkm) {
        printf("\nSugerimos usar o plano por dia");
    } else {
        printf("\nSugerimos usar o plano por KM");
    }

    printf("\nTenha uma boa tarde.");

    printf("\n\nDesenvolvido por Dom Johnny");

    return 0;
}