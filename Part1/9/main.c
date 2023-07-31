#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double A = 0;
    double B = 0;
    double temp = 0;

    printf("Введите A: ");
    scanf("%lf", &A);

    printf("Введите B: ");
    scanf("%lf", &B);

    // // Значение A будет присвоено переменной temp
    // temp = A;
    //
    // // Значение B будет назначено переменной A
    // A = B;
    //
    // // Значение temp будет присвоено B
    // B = temp;

    A = A - B;
    B = A + B;
    A = B - A;

    printf("\nПосле замены, A = %.2lf\n", A);
    printf("После замены, B = %.2lf\n", B);

    return EXIT_SUCCESS;
}
