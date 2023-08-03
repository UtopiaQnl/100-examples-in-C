#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>


static int8_t status = 0;

void error_print(void);
bool get_positive_i64(int64_t *number);


int main(void)
{
    int64_t number = 0;
    printf("Введите положительное целое число: ");

    if (get_positive_i64(&number) == false) {
        error_print();
        return EXIT_FAILURE;
    }

    register uint64_t sum = 0;

    for (register uint64_t i = 0; i <= (uint64_t)number; ++i) {
        sum += i;
    }

    printf("Сумма - %" PRIu64 "\n", sum);

    return EXIT_SUCCESS;
}


bool get_positive_i64(int64_t *number)
{
    if (scanf("%" SCNd64, number) == 0) {
        status = 1;
        return false;
    }
    if (*number < 0) {
        status = 2;
        return false;
    }
    if (*number == INT64_MAX) {
        status = 3;
        return false;
    }
    return true;
}


void error_print(void)
{
    switch (status) {
        case 1:
            fputs("Вы ничего не ввели!\n", stderr);
            break;
        case 2:
            fputs("Вы ввели отрицательное число!\n", stderr);
            break;
        case 3:
            fputs("Вы ввели слишком большое число! Максимально вводимое число - (2^64 - 1) 9223372036854775807\n",
                  stderr);
            break;
    }
}
