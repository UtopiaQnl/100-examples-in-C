#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char line[150];

    printf("Введите строке: ");
    fgets(line, 150, stdin);

    for (size_t i = 0; line[i] != '\0'; i++) {
        while (!((line[i] >= '0' && line[i] <= '9') || line[i] == '\0')) {
            size_t j;
            for (j = i; line[j] != '\0'; ++j) {
                line[j] = line[j + 1];
            }
            line[j] = '\0';
        }
    }
    printf("Результат: ");
    puts(line);

    return EXIT_SUCCESS;
}
