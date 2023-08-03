#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int64_t number = 0;
    printf("Введите число: ");
    scanf("%" SCNd64, &number);

    if (number == 0) {
        puts("Вы ввели нуль.");
    } else {
        printf("Вы вели %s число.\n", (number > 0) ? "положительное" : "отрицательное");
    }

    return EXIT_SUCCESS;
}
