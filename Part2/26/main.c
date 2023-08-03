#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int Number, reverseNumber = 0;

    printf("Введите целое число: ");
    scanf("%d", &Number);

    int originalNumber = Number;

    while (Number != 0) {
        reverseNumber = reverseNumber * 10 + (Number % 10);
        Number /= 10;
    }

    printf("%d - %s палиндром\n", originalNumber, (originalNumber == reverseNumber) ? "" : "не");

    return EXIT_SUCCESS;
}
