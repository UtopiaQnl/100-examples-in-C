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

    printf("Введите количество элементов: ");
    scanf("%zu", &len);

    float *data = (float *)calloc(len, sizeof(float));

    if (data == NULL) {
        fputs("Ошибка выделения памяти.", stderr);
        return EXIT_FAILURE;
    }

    putchar(0xA);

    for (size_t i = 0; i < len; ++i) {
        printf("Введите элемент %zu: ", i + 1);
        scanf("%f", data + i);
    }

    for (size_t i = 1; i < len; ++i) {
        if (*data < *(data + i)) {
            *data = *(data + i);
        }
    }

    printf("Максимум = %.2f\n", *data);

    return EXIT_SUCCESS;
}
