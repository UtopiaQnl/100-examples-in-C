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
#include <string.h>

int main(int argc, char *argv[])
{
    char str[1000], ch;
    int frequence = 0;

    printf("Введите строку: ");
    fgets(str, 1000, stdin);

    printf("Введите символ: ");
    ch = getchar();

    for (size_t i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i]) frequence++;
    }

    printf("Частота = %d\n", frequence);

    return EXIT_SUCCESS;
}
