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

void cyclecSwap(int *a, int *b, int *c);


int main(int argc, char *argv[])
{
    int a, b, c;
    printf("Введите a, b и c: ");
    scanf("%d %d %d", &a, &b, &c);

    puts("До замены:");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    cyclecSwap(&a, &b, &c);

    puts("После:");
    printf("a = %d\nb = %d\nc = %d\n", a, b, c);

    return EXIT_SUCCESS;
}


void cyclecSwap(int *a, int *b, int *c)
{
    int temp = *b;

    *b = *a;
    *a = *c;
    *c = temp;
}
