#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char c = 0;  // getchar()
    printf("Введите символ: ");

    // Читаем ввод пользователя
    scanf("%c", &c);

    // %d (decimal) отображает целочисленное значение символа
    // %с (character) отображает сам символ
    printf("ASCII-код %c = %d\n", c, c);

    return EXIT_SUCCESS;
}
