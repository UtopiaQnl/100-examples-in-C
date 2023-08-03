#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

long double factorial(int32_t index);

int main(void)
{
    int16_t count;

    printf("Введите количество факториалов: ");
    scanf("%" SCNd16, &count);

    if (count < 0) {
        fputs("Вы ввели отрицательное число!\n", stderr);
        return EXIT_FAILURE;
    } else if (count > UINT8_MAX) {
        fputs("Ты шо? хочешь реально овер много факториалов? неее. Я ливаю.\n", stderr);
        return EXIT_FAILURE;
    }

    for (register int32_t i = 1; i <= count; ++i) {
        printf("%" PRId32 "! = %.0Lf\n", i, factorial(i));
    }

    return EXIT_SUCCESS;
}

long double factorial(int32_t index)
{
    long double result = 1;
    for (register int32_t i = 1; i <= index; ++i) {
        result *= i;
    }
    return result;
}
