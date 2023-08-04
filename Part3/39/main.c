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

int convertBinaryToDecimal(int64_t n);
int64_t convertDecimalToBinary(int n);

int main(int argc, char *argv[])
{
    int64_t n;
    printf("Введите двоичное число: ");
    scanf("%" SCNd64, &n);
    printf("%" PRId64 " (двоичное) = %d (десятичное)\n", n, convertBinaryToDecimal(n));

    printf("Введите десятичное число: ");
    scanf("%" SCNd64, &n);
    printf("%" PRId64 " (десятичное) = %" PRId64 "(двоичное)\n", n, convertDecimalToBinary(n));

    return EXIT_SUCCESS;
}

int convertBinaryToDecimal(int64_t n)
{
    int decimalNumber = 0;
    int i = 0;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        decimalNumber += digit * pow(2, i);
        i++;
    }
    return decimalNumber;
}

int64_t convertDecimalToBinary(int n)
{
    int64_t binaryNumber = 0;
    int step = 1, i = 1;
    while (n != 0) {
        int digit = n % 2;
        printf("Шаг %d: %d/2, Остаток = %d, Частное = %d\n", step++, n, digit, n / 2);
        n /= 2;
        binaryNumber += digit * i;
        i *= 10;
    }
    return binaryNumber;
}
