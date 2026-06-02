#include <stdio.h>

int calcularHorasCurso(int semestres, int horasPorMes) {
    return semestres * 5 * horasPorMes;
}

int main() {
    int semestres, horasPorMes;

    printf("Digite a quantidade de semestres: ");
    scanf("%d", &semestres);

    printf("Digite a quantidade de horas por mes: ");
    scanf("%d", &horasPorMes);

    printf("Total de horas do curso: %d\n",
           calcularHorasCurso(semestres, horasPorMes));

    return 0;
}