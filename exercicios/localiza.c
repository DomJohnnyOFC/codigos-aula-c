#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int km = 0;
    int dias = 0;
    char nome[30];
    float totalPorkm = 0;
    float totalPordia = 0;
    const float VALOR_POR_KM = 1.25;
    const float VALOR_POR_DIA = 99.50;

    printf("Ola, seja bem vindo, qual seu nome");
    scanf("%s", nome);

    printf("Obrigado por escolher nossa lojinha, %s", nome);

    printf("\nQuantos KMs você vai rodar com o carro?");
    scanf("%i", &km);

    printf("Para mostrar um relatorio detalhado diga quantos dias vai precisar do carro?");
    scanf("%i", &dias);

    totalPorkm = km * VALOR_POR_KM;
    totalPordia = dias * VALOR_POR_DIA;

    printf("%s, segue um relatorio", nome);
    printf("\nTotal por KM: R$ %.2f", totalPorkm);
    printf("\nTotal por DIA: R$ %.2f", totalPordia);

    if (totalPordia < totalPorkm) {
        printf("\nSugerimos usar o plano por dia");
    } else {
        printf("\nSugerimos usar o plano por KM");
    }

    printf("\nTenha uma boa tarde.");

    return 0;
}