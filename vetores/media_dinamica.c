#include <stdio.h>

int main()
{
    int muitasNotas;
    float soma = 0;

    printf("Quantas notas?");
    scanf("%i", &muitasNotas);

    float notas[muitasNotas];

    for (int i = 0; i < muitasNotas; i++)
    {
        printf("Nota %i: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / muitasNotas;

    printf("Media final: %.2f\n", media);

    return 0;
}