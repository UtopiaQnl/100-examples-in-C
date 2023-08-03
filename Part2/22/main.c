#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int32_t gcd(int64_t a, int64_t b);

int main(void)
{
    int64_t a, b;
    printf("Введите два положительных целых числа: ");
    scanf("%" SCNd64 "%" SCNd64, &a, &b);

    printf("НОК %" PRId64 " и %" PRId64 " равено %" PRId64 "\n", a, b, (a * b) / gcd(a, b));

    return EXIT_SUCCESS;
}

int32_t gcd(int64_t a, int64_t b)
{
    while (b != 0) {
        uint64_t tmp = a;
        a = b;
        b = tmp % b;
    }
    return a;
}
