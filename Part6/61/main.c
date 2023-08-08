#include <stdio.h>
#include <stdlib.h>

struct Distance {
    int feet;
    float m;
} d1, d2, sumOfDistances;


int main(int argc, char *argv[])
{
    puts("Заполняем первую структуру");
    printf("Количево шагов: ");
    scanf("%d", &d1.feet);
    printf("Количество метров: ");
    scanf("%f", &d1.m);

    puts("Заполняем вторую структуру");
    printf("Количево шагов: ");
    scanf("%d", &d2.feet);
    printf("Количество метров: ");
    scanf("%f", &d2.m);

    sumOfDistances.feet = d1.feet + d2.feet;
    sumOfDistances.m = d1.m + d2.m;

    printf("\nРезультат = %d - %.1f\n", sumOfDistances.feet, sumOfDistances.m);

    return EXIT_SUCCESS;
}
