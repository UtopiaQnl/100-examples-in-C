#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char letter;

    printf("Введите символ:  ");
    scanf("%c", &letter);

    if ((letter >= 'A' && letter <= 'Z') || (letter >= 'a' && letter <= 'z')) {
        printf("%c - алфавитный\n", letter);
    } else {
        printf("%c - не алфавитный\n", letter);
    }

    return EXIT_SUCCESS;
}
