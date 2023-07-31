#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    long b;
    long long c;

    double e;
    long double f;

    printf("Размер int = %zu байт\n", sizeof(a));
    printf("Размер long = %zu байт\n", sizeof(b));
    printf("Размер long long = %zu байт\n\n", sizeof(c));

    printf("Размер double = %zu байт\n", sizeof(e));
    printf("Размер long double = %zu байт\n", sizeof(f));

    return EXIT_SUCCESS;
}
