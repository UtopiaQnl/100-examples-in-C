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

int convertDecimalToOctal(int decimalNumber);
int64_t convertOctalToDecimal(int octalNumber);


int main(int argc, char *argv[])
{
    int decimalNumber;
    int octalNumber;

    printf("Введите десятичное число: ");
    scanf("%d", &decimalNumber);

    printf("%d (десятичное) = %d (восьмеричное)\n", decimalNumber, convertDecimalToOctal(decimalNumber));

    printf("Введите восьмеричное число: ");
    scanf("%d", &octalNumber);

    printf("%d (восьмеричное) = %" PRId64 " (десятичное)\n", octalNumber, convertOctalToDecimal(octalNumber));

    return EXIT_SUCCESS;
}

int convertDecimalToOctal(int decimalNumber)
{
    int octalNumber = 0, i = 1;
    while (decimalNumber) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }
    return octalNumber;
}

int64_t convertOctalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }
    return decimalNumber;
}
