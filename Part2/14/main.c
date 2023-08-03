#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int32_t year = 0;

    printf("Введите год: ");
    scanf("%" SCNd32, &year);

    bool condition = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);
    printf("%" PRId32 " - %sвисокосный\n", year, (condition) ? "" : "не");

    return EXIT_SUCCESS;
}
