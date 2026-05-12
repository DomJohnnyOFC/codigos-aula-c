#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    char grupoBrasil[4][50];
    int gols[4] = {0};
    
    printf("--Vamos preencher o grupo do Brasil na copa--");

    for (int i = 0; i < 4; i++)
    {
        printf("\nQual selecao? ");
        scanf(" %[^\n]", grupoBrasil[i]);
    }

    printf("\n--Agora vamos registrar os resultados dos jogos--\n");

    int g1, g2;

    // Todos contra todos (6 partidas)
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 4; j++)
        {
            printf("\n%s x %s\n", grupoBrasil[i], grupoBrasil[j]);

            printf("Gols de %s: ", grupoBrasil[i]);
            scanf("%d", &g1);

            printf("Gols de %s: ", grupoBrasil[j]);
            scanf("%d", &g2);

            gols[i] += g1;
            gols[j] += g2;
        }
    }

    printf("\n--Total de gols de cada selecao--\n");

    for (int i = 0; i < 4; i++)
    {
        printf("%s: %d gols\n", grupoBrasil[i], gols[i]);
    }

    return 0;
}