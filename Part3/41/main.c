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

int convertBinaryToOctal(int64_t binaryNumber);
int64_t convertOctalToBinary(int octalNumber);


int main(int argc, char *argv[])
{
    int64_t binaryNumber;
    int octalNumber;

    printf("Введите двоичное число: ");
    scanf("%" SCNd64, &binaryNumber);

    printf("%" PRId64 " (двоичное) = %d (восьмеричное)\n", binaryNumber, convertBinaryToOctal(binaryNumber));

    printf("Введите восьмеричное число: ");
    scanf("%d", &octalNumber);

    printf("%d (восьмеричное) = %" PRId64 " (двоичное)\n", octalNumber, convertOctalToBinary(octalNumber));

    return EXIT_SUCCESS;
}


int convertBinaryToOctal(int64_t binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while (binaryNumber != 0) {
        decimalNumber += (binaryNumber % 10) * pow(2, i);
        ++i;
        binaryNumber /= 10;
    }

    i = 1;

    while (decimalNumber != 0) {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}


int64_t convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    int64_t binaryNumber = 0;

    while (octalNumber != 0) {
        decimalNumber += (octalNumber % 10) * pow(8, i);
        ++i;
        octalNumber /= 10;
    }
    i = 1;
    while (decimalNumber != 0) {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }
    return binaryNumber;
}
