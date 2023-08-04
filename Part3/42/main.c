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

void reverseSentence(void);


int main(int argc, char *argv[])
{
    printf("Введите предложение: ");
    reverseSentence();
    putchar(0xA);
    return EXIT_SUCCESS;
}

void reverseSentence(void)
{
    int c = getchar();

    if (c != '\n') {
        reverseSentence();
        putchar(c);
    }
}
