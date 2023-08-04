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

int addNumbers(int n);

int main(int argc, char *argv[])
{
    int num;
    printf("Введите положительное целое число: ");
    scanf("%d", &num);
    printf("Сумма = %d\n", addNumbers(num));

    return EXIT_SUCCESS;
}

int addNumbers(int n)
{
    if (n != 0)
        return n + addNumbers(n - 1);
    else
        return n;
}
