// #define NDEBUG // disables assert()
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
    int low, high;

    printf("Выводим простые числа между a и b, введите a и b: ");
    scanf("%d %d", &low, &high);

    if (low > high) {
        int temp = low;
        low = high;
        high = temp;
    }

    while (low < high) {
        if (isPrime(low)) printf("%d ", low);
        low++;
    }
    putchar('\n');


    return EXIT_SUCCESS;
}
