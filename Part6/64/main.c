#include <stdio.h>
#include <stdlib.h>

struct course {
    int marks;
    char subject[30];
};


int main(int argc, char *argv[])
{
    struct course *ptr;
    size_t length;

    printf("Количество записей: ");
    scanf("%zu", &length);

    ptr = (struct course *)malloc(length * sizeof(struct course));

    for (size_t i = 0; i < length; ++i) {
        puts("Введите название предмета и оценку:");
        scanf("%30s %d", (ptr + i)->subject, &(ptr + i)->marks);
    }

    puts("Результат:");

    for (size_t i = 0; i < length; ++i) {
        printf("%s\t%d\n", ptr[i].subject, ptr[i].marks);
    }

    return EXIT_SUCCESS;
}
