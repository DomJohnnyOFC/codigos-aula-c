#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    char nome [12] = "João Vitor";
    char logradouro[20] = "Mario Dedini";
    char bairro[14] = "Wesly Sucasas";
    char cidade[11] = "Piracicaba";
    char uf[3] = "SP";

    printf("---Minhas informações residenciais---");
    printf("\nLogradouro: %s", logradouro);
    printf("\nBairro: %s", bairro);
    printf("\nCidade: %s", cidade);
    printf("\nUF: %s", uf);

    return 0;

}