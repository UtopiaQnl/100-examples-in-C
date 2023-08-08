#include <stdio.h>
#include <stdlib.h>

const char *filename = "65/text.txt";

int main(int argc, char *argv[])
{
    char c[1000];
    FILE *fptr;

    if ((fptr = fopen(filename, "r")) == NULL) {
        perror(filename);
        return EXIT_FAILURE;
    }

    fscanf(fptr, "%999[^\n]", c);

    printf("Прочитано из файла: '%s'\n", c);

    fclose(fptr);


    return EXIT_SUCCESS;
}
