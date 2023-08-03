#include <iso646.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char character = 0;

    bool isLowercaseVowel = false;
    bool isUppercaseVowel = false;

    printf("Введите любой символ ASCII: ");
    scanf("%c", &character);

    // Возвращает 1 (true), если character - гласный (нижний регистр)
    isLowercaseVowel =
        (character == 'a' or character == 'e' or character == 'i' or character == 'o' or character == 'y');

    // Возвращает 1 (true), если character - гласный (верхний регистр)
    isUppercaseVowel =
        (character == 'A' or character == 'E' or character == 'I' or character == 'O' or character == 'Y');

    if (isUppercaseVowel or isLowercaseVowel)
        printf("Введенный символ - гласный\n");
    else
        printf("Введенный символ - согласный\n");

    return EXIT_SUCCESS;
}
