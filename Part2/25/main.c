#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

typedef long double float128;

float128 fast_power(float128 base, float128 exp);


int main(int argc, char *argv[])
{
    float128 base, exp;
    printf("Введите число и степень, в которую его нужно возвести (положительные числа): ");
    scanf("%Lf %Lf", &base, &exp);

    printf("%.0Lf^%.0LF = %.0Lf\n", base, exp, fast_power(base, exp));

    return EXIT_SUCCESS;
}

float128 fast_power(float128 base, float128 exp)
{
    if (exp <= 1) {
        return base;
    }
    if (fmodl(exp, 2) != 0) {
        return base * fast_power(base, exp - 1);
    } else {
        return fast_power(base * base, exp / 2);
    }
}
