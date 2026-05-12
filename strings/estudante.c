#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char nome[25];
    char escola[17];
    char curso[20];
    char cidade[17];
    char estado[3];
    char idade[3];

    printf("--- Cadastro dos caras ---\n");

    printf("Digite seu vulgo: ");
    scanf(" %[^\n]", nome);

    printf("Digite sua escola (SESI e SENAI): ");
    scanf(" %[^\n]", escola);

    printf("Digite seu curso: ");
    scanf(" %[^\n]", curso);

    printf("Digite sua cidade: ");
    scanf(" %[^\n]", cidade);

    printf("Digite sua idade: ");
    scanf(" %[^\n]", idade);

    printf("Digite seu estado (UF): ");
    scanf("%s", estado);

    printf("\n--- Informacoes do Estudante ---\n");
    printf("Nome: %s\n", nome);
    printf("Escola: %s\n", escola);
    printf("Curso: %s\n", curso);
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Idade: %s\n", idade);

    return 0;
}