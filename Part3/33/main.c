#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

bool checkPrimeNumber(int);
bool checkArmstrongNumber(int);

int main(void)
{
    int n;
    bool flag;

    printf("Введите положительное целое число: ");
    scanf("%d", &n);

    flag = checkPrimeNumber(n);
    if (flag == true)
        printf("%d - простое.\n", n);
    else
        printf("%d - не является простым.\n", n);

    flag = checkArmstrongNumber(n);
    if (flag == true)
        printf("%d - число Армстронга.\n", n);
    else
        printf("%d - не является числом Армстронга.\n", n);

    return EXIT_SUCCESS;
}

bool checkPrimeNumber(int n)
{
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (size_t i = 5; i < sqrt(n); i += 6) {
        if ((n % i == 0) || (n % (i + 2) == 0)) return false;
    }

    return true;
}

bool checkArmstrongNumber(int n)
{
    int originNumber = n, result = 0, n_len = (int)log10((n > 0) ? n : -n) + 1;

    while (originNumber != 0) {
        int digit = originNumber % 10;
        result += pow(digit, n_len);
        originNumber /= 10;
    }

    return result == n;
}
