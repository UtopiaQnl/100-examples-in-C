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

uint64_t fact(int n);

int main(int argc, char *argv[])
{
    int n;
    printf("Введите положительное число: ");
    scanf("%d", &n);
    printf("Факториал %d = %ld\n", n, fact(n));


    return EXIT_SUCCESS;
}

inline uint64_t fact(int n)
{
    return (n >= 1) ? n * fact(n - 1) : 1;
}
