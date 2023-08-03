#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Введите целое число: ");
    scanf("%d", &n);

    n = (n < 0) ? -n : n;

    while (n != 0) {
        printf("%d", n % 10);
        n /= 10;
    }
    putchar('\n');

    return EXIT_SUCCESS;
}
