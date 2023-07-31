#include <inttypes.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void)
{
    char ch;
    short int sh;
    int i;
    long int l;
    long long int ll;
    float f;
    double d;
    long double ld;

    int8_t i8;
    int16_t i16;
    int32_t i32;
    int64_t i64;

    size_t sz;
    ptrdiff_t df;

    printf("Размер char: %zu байт.\n", sizeof(ch));
    printf("Размер short int: %zu байт.\n", sizeof(sh));
    printf("Размер int: %zu байт.\n", sizeof(i));
    printf("Размер logn int: %zu байт.\n", sizeof(l));
    printf("Размер long long int: %zu байт.\n", sizeof(ll));
    printf("Размер float: %zu байт.\n", sizeof(f));
    printf("Размер double: %zu байт.\n\n", sizeof(d));
    printf("Размер long double: %zu байт.\n\n", sizeof(ld));

    printf("Размер int8_t: %zu байт.\n", sizeof(i8));
    printf("Размер int16_t: %zu байт.\n", sizeof(i16));
    printf("Размер int32_t: %zu байт.\n", sizeof(i32));
    printf("Размер int64_t: %zu байт.\n\n", sizeof(i64));

    printf("Размер size_t: %zu байт.\n", sizeof(sz));
    printf("Размер ptrdiff_t: %zu байт.\n", sizeof(df));

    return EXIT_SUCCESS;
}
