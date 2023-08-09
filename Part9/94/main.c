#include <stdio.h>
#include <stdlib.h>
#include <termios.h>

#define PASSMAX 1024


int main(void)
{
    struct termios defrsett, newrsett;
    char password[PASSMAX + 1] = {0};

    tcgetattr(fileno(stdin), &defrsett);

    newrsett = defrsett;
    newrsett.c_lflag &= ~ECHO;

    printf("Введите пароль: ");

    if (tcsetattr(fileno(stdin), TCSAFLUSH, &newrsett) != 0) {
        fputs("Не установлены атрибуты\n", stderr);
    } else {
        fgets(password, PASSMAX, stdin);
        tcsetattr(fileno(stdin), TCSANOW, &defrsett);
        fprintf(stdout, "\nВведённый пароль: %s\n", password);
    }

    return EXIT_SUCCESS;
}
