#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

bool isPrime(int64_t a)
{
    if (a < 2) return false;
    if (a % 2 == 0) return a == 2;

    uint32_t d = 3;
    while (d * d <= a && a % d != 0) {
        d += 2;
    }

    return d * d > a;
}


int main(int argc, char *argv[])
{
    int64_t number;

    printf("Введите целом положительное число: ");
    scanf("%" SCNd64, &number);

    printf("%" PRId64 " - %sпростое.\n", number, isPrime(number) ? "" : "не ");

    return EXIT_SUCCESS;
}
