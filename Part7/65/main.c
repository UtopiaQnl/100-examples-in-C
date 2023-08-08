#include <stdio.h>
#include <stdlib.h>

const char *filename = "text.txt";


int main(int argc, char *argv[])
{
    char sentence[100];
    FILE *fptr;

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        perror(filename);
        return EXIT_FAILURE;
    }

    puts("Введите предложение:");
    fgets(sentence, 100, stdin);

    fprintf(fptr, "%s", sentence);
    fclose(fptr);

    return EXIT_SUCCESS;
}
