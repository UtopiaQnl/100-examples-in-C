#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    char s[1000] = {0};
    size_t lenth = 0;

    printf("Введите строку: ");
    fgets(s, 1000, stdin);

    while (s[lenth] != '\0') lenth++;

    printf("Длина: %zu\n", lenth);


    return EXIT_SUCCESS;
}
