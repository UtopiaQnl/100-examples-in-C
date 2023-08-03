#include <inttypes.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#define abs(x) (x > 0) ? (x) : -(x)

size_t get_count_digit(int64_t number);

int main(void)
{
    int64_t number;
    printf("Введите целое число: ");
    scanf("%" SCNd64, &number);

    printf("Количество цифр из math: %" PRIu64 "\n", (uint64_t)log10(abs((double)number)) + 1);
    printf("Количество цифр (моё): %zu\n", get_count_digit(number));

    return EXIT_SUCCESS;
}


size_t get_count_digit(int64_t number)
{
    number = abs(number);
    size_t count = 0;
    while (number > 0) {
        number /= 10;
        count++;
    }
    return count;
}
