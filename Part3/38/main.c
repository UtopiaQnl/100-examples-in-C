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


int hcf(int n1, int n2);

int main(int argc, char *argv[])
{
    int n1, n2;
    printf("Введитие 2 положительных целых числа: ");
    scanf("%d %d", &n1, &n2);

    printf("НОД = %d\n", hcf(n1, n2));

    return EXIT_SUCCESS;
}

inline int hcf(int n1, int n2)
{
    return (n2 != 0) ? hcf(n2, n1 % n2) : n1;
}
