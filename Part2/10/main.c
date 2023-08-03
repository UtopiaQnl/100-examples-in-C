#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int32_t number;


    printf("Введите целое число: ");
    scanf("%" SCNd32, &number);

    if (number % 2 == 0)
        printf("%" PRId32 " - четное\n", number);
    else
        printf("%" PRId32 " - нечетное\n", number);

    return EXIT_SUCCESS;
}
