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

int main(int argc, char *argv[])
{
    char what;

    double first_num, second_num;

    printf("Введите оператор (+, -, *, /): ");
    scanf("%c", &what);

    printf("Введите два операнда: ");
    scanf("%lf %lf", &first_num, &second_num);

    switch (what) {
        case '+':
            printf("%.11f + %.11f = %.11f\n", first_num, second_num, first_num + second_num);
            break;
        case '-':
            printf("%.11f - %.11f = %.11f\n", first_num, second_num, first_num - second_num);
            break;
        case '*':
            printf("%.11f * %.11f = %.11f\n", first_num, second_num, first_num * second_num);
            break;
        case '/':
            if (second_num != 0)
                printf("%.11f / %.11f = %.11f\n", first_num, second_num, first_num / second_num);
            else
                puts("Ошибка! На ноль делить не хочу!");
            break;
        default:
            puts("Ошибка! Неправильный оператор");
    }

    return EXIT_SUCCESS;
}
