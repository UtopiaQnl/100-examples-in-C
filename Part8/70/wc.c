#include <ctype.h>
#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

static bool FF = false;

static bool check_count_args(const int arg_count);
static void print_result(const size_t characters, const size_t words, const size_t lines);


int main(int argc, char *argv[])
{
    if (!check_count_args(argc)) {
        perror("wc");
        return EXIT_FAILURE;
    }

    FILE *from = NULL;

    if (FF == true) {
        const char *file_name = argv[1];
        if ((from = fopen(file_name, "r")) == NULL) {
            perror(file_name);
            return EXIT_FAILURE;
        }
    } else {
        from = stdin;
    }

    size_t total_characters = 0;
    size_t total_lines = 0;
    size_t total_words = 0;

    bool in_space = true;

    int character;
    while ((character = fgetc(from)) != EOF) {
        total_characters++;
        if (isspace(character)) {
            in_space = true;
            if (character == '\n') {
                total_lines++;
            }
        } else {
            total_words += in_space;
            in_space = false;
        }
    }
    if (FF == true) {
        fclose(from);
    }

    print_result(total_characters, total_words, total_lines);

    if (FF == true) {
        printf("Файл: %s\n", argv[1]);
    }

    return EXIT_SUCCESS;
}

static bool check_count_args(const int arg_count)
{
    if (arg_count > 2) {
        errno = E2BIG;
        return false;
    }
    if (arg_count == 2) FF = true;
    errno = 0;
    return true;
}


static void print_result(const size_t characters, const size_t words, const size_t lines)
{
    printf("Строки: %zu\n", lines);
    printf("Слова: %zu\n", words);
    printf("Символы: %zu\n", characters);
}
