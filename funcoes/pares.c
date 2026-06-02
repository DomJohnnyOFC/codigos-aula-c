#include <stdio.h>
#include <locale.h>

void mostrarPares(int inferior, int superior) {
    for (int i = inferior; i <= superior; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
}

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    int inferior, superior;

    printf("Digite o limite inferior: ");
    scanf("%d", &inferior);

    printf("Digite o limite superior: ");
    scanf("%d", &superior);

    mostrarPares(inferior, superior);

    return 0;
}