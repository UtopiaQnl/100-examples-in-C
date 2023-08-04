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

bool checkPrimeNumber(int n);
void separator(void);

int main(int argc, char *argv[])
{
    int n1, n2;
    bool flag;

    printf("Введите начало и конец диапазона чисел: ");
    scanf("%d %d", &n1, &n2);
    printf("Выводим простые числа в заданном диапазоне: ");
    separator();

    for (size_t i = n1 + 1; i < n2; ++i) {
        flag = checkPrimeNumber(i);

        if (flag == true) printf("%zu ", i);
    }

    separator();

    return EXIT_SUCCESS;
}

void separator(void)
{
    putchar('\n');
    for (size_t i = 0; i < 80; ++i) putchar('=');
    putchar('\n');
}

bool checkPrimeNumber(int n)
{
    if (n <= 3) return n > 1;
    if ((n % 2 == 0) || (n % 3 == 0)) return false;

    for (size_t i = 5; i < sqrt(n); i += 6) {
        if ((n % i == 0) || (n % (i + 2) == 0)) return false;
    }

    return true;
}
