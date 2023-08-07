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
    int data[5];

    printf("Введите 5 элементов: ");

    for (size_t i = 0; i < 5; ++i) {
        scanf("%d", data + i);
    }

    puts("Содержимое массива: ");
    for (size_t i = 0; i < 5; ++i) {
        printf("%5d\n", *(data + i));
    }

    return EXIT_SUCCESS;
}
