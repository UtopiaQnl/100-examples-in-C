#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char s1[100], s2[100];
    size_t i;

    fputs("Первая строка: ", stdout);
    fgets(s1, 100, stdin);

    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }

    s2[i] = '\0';

    fprintf(stdout, "Строка s2: %s\n", s2);


    return EXIT_SUCCESS;
}
