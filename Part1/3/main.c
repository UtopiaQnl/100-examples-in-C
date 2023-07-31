#include <errno.h>
#include <inttypes.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int32_t firstNumber = 0;
    int32_t secondNumber = 0;
    int32_t sum = 0;

    printf("Введите два целых числа: ");

    // Читаем 2 целых числа функции scanf()
    scanf("%" SCNd32 " %" SCNd32, &firstNumber, &secondNumber);

    // вычисляем сумму двух чисел
    sum = firstNumber + secondNumber;

    // отображаем сумму
    printf("%" PRId32 " + %" PRId32 " = %" PRId32 "\n", firstNumber, secondNumber, sum);


    return EXIT_SUCCESS;
}
