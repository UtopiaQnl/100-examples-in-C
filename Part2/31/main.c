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

#define abs(x) ((x) > 0) ? (x) : -(x)

int main(int argc, char *argv[])
{
    int rows;

    printf("Количество строк: ");
    scanf("%d", &rows);

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < i; ++j) {
            printf("* ");
        }
        putchar('\n');
    }

    return EXIT_SUCCESS;
}
