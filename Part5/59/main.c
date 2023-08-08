#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LEN 10

int main(int argc, char *argv[])
{
    char str[LEN][50], temp[50];

    for (size_t i = 0; i < LEN; ++i) scanf("%s[^\n]", str[i]);

    for (size_t i = 0; i < LEN; ++i) {
        for (size_t j = i + 1; j < LEN; ++j) {
            if (strcmp(str[i], str[j]) > 0) {
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    puts("\nВ лексикографическом порядке: ");
    for (size_t i = 0; i < LEN; ++i) {
        puts(str[i]);
    }


    return EXIT_SUCCESS;
}
