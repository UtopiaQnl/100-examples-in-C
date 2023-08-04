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

bool checkPrime(int n);


int main(int argc, char *argv[])
{
    int n;
    bool flag;

    printf("Введите целое положительное число: ");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; ++i) {
        if (checkPrime(i) == true) {
            if (checkPrime(n - i) == true) {
                printf("%d = %d + %d\n", n, i, n - i);
                flag = true;
            }
        }
    }

    if (flag == false) printf("%d не может быть выражено как суммапростых чисел.\n", n);
    putchar(0xA);

    return EXIT_SUCCESS;
}

bool checkPrime(int n)
{
    if (n <= 3) return n > 1;
    if (n % 2 == 0 || n % 3 == 0) return false;

    for (size_t i = 5; i < sqrt(n); i += 6) {
        if ((n % i == 0) || (n % (i + 2) == 0)) return false;
    }
    return true;
}
