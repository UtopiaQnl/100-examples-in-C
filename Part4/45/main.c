// #define NDEBUG // disables assert()
#include <assert.h>
#include <errno.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

float calculateSD(float data[static 10]);

int main(int argc, char *argv[])
{
    float data[10];

    printf("Введите 10 элементов: ");
    for (size_t i = 0; i < 10; ++i) {
        scanf("%f", &data[i]);
    }

    printf("\nСреднеквадратическое отклонение = %.6f\n", calculateSD(data));


    return EXIT_SUCCESS;
}

float calculateSD(float data[static 10])
{
    float sum = 0.0f;
    float standartDeviation = 0.0f;
    float mean;

    for (size_t i = 0; i < 10; ++i) {
        sum += data[i];
    }

    mean = sum / 10;

    for (size_t i = 0; i < 10; ++i) {
        standartDeviation += pow(data[i] - mean, 2);
    }

    return sqrt(standartDeviation / 10);
}
