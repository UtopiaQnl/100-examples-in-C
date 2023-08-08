#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char line[150];
    int total, digits, spaces;

    total = digits = spaces = 0;

    printf("Введите строку: ");
    scanf("%149[^\n]", line);

    for (size_t i = 0; line[i] != '\0'; ++i) {
        if (line[i] >= '0' && line[i] <= '9') {
            digits++;
        } else if (line[i] == ' ') {
            spaces++;
        }
        total++;
    }

    printf("Всего символов: %d\n", total);
    printf("Цифр: %d\n", digits);
    printf("Пробелов: %d\n", spaces);

    return EXIT_SUCCESS;
}
