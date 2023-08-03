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


uint64_t fast_pow(uint64_t base, uint64_t exp)
{
    if (exp <= 1) return base;
    if (exp % 2 != 0) {
        return base * fast_pow(base, exp - 1);
    } else {
        return fast_pow(base * base, exp / 2);
    }
}


int main(int argc, char *argv[])
{
    int Number, result = 0;

    printf("Введите число: ");
    scanf("%d", &Number);

    size_t n_digit = (uint64_t)log10(abs((double)Number)) + 1;

    int originNumber = Number;

    while (originNumber != 0) {
        result += fast_pow(originNumber % 10, n_digit);
        originNumber /= 10;
    }

    printf("%d - %sчисло Армстронга\n", Number, (result == Number) ? "" : "не ");

    return EXIT_SUCCESS;
}
