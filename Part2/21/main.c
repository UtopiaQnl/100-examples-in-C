#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


int32_t gcd(uint64_t a, uint64_t b);

int main(void)
{
    double a, b;
    printf("Введите два целых числа: ");
    scanf("%lf %lf", &a, &b);

    a = (a > 0) ? a : -a;
    b = (b > 0) ? b : -b;

    printf("НОД %.0lf и %.0lf равено %" PRId32 "\n", a, b, gcd((uint64_t)a, (uint64_t)b));

    return EXIT_SUCCESS;
}

int32_t gcd(uint64_t a, uint64_t b)
{
    while (b != 0) {
        uint64_t tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}
