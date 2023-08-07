// #define NDEBUG // disables assert()
#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t len;
    float num[100];
    float sum = 0.0f;
    float avg;

    printf("Введите количество элементов: ");
    scanf("%zu", &len);

    while (len > 100 || len <= 0) {
        puts("Количество должно быть в пределах от 1 до 100.");
        printf("Введите количество ещё раз: ");
        scanf("%zu", &len);
    }

    for (size_t i = 0; i < len; ++i) {
        printf("%zu. Введите число: ", i + 1);
        scanf("%f", num + i);
        sum += i[num];
    }

    avg = sum / len;
    printf("Среднее = %.2f\n", avg);

    return EXIT_SUCCESS;
}
