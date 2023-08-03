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
    int low, high;

    printf("Введите два числа (начало и конец диапазона): ");
    scanf("%d %d", &low, &high);

    printf("Числа Армстронга: ");

    while (low < high) {
        size_t n_digit = (uint64_t)log10(abs((double)low)) + 1;

        int number = low, result = 0;

        while (number != 0) {
            result += fast_pow(number % 10, n_digit);
            number /= 10;
        }

        if (result == low) printf("%d ", low);

        low++;
    }

    putchar('\n');

    return EXIT_SUCCESS;
}
