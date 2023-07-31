#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int32_t dividend = 0;
    int32_t divisor = 1;
    int32_t quotient = 0;
    int32_t remainder = 0;

    printf("Введите делимое: ");
    scanf("%" SCNd32, &dividend);

    printf("Введите делитель: ");
    scanf("%" SCNd32, &divisor);

    // Вычисление частного
    quotient = dividend / divisor;

    // Вычисление остатка
    remainder = dividend % divisor;

    printf("Частное = %" PRId32 "\n", quotient);
    printf("Остаток = %" PRId32 "\n", remainder);

    return EXIT_SUCCESS;
}
