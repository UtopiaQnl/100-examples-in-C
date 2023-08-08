#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char s1[100], s2[100];

    fputs("Первая строка: ", stdout);
    fgets(s1, 100, stdin);

    fputs("Вторая строка: ", stdout);
    fgets(s2, 100, stdin);

    size_t len_s1 = 0;
    while (!(s1[len_s1] == '\0' || s1[len_s1] == '\n')) len_s1++;

    for (size_t len_s2 = 0; s2[len_s2] != '\0'; ++len_s2, ++len_s1) {
        s1[len_s1] = s2[len_s2];
    }

    s1[len_s1] = '\0';
    fprintf(stdout, "Результат : %s\n", s1);

    return EXIT_SUCCESS;
}
