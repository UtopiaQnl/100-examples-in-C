#include <stdio.h>
#include <stdlib.h>

struct student {
    char name[50];
    int roll;
    int group;
} s;

int main(void)
{
    puts("Введите информацию:");

    printf("Имя: ");
    fgets(s.name, 50, stdin);

    printf("Номер билета: ");
    scanf("%d", &s.roll);

    printf("Номер группы: ");
    scanf("%d", &s.group);

    puts("Выводим информацию:");

    printf("Имя: ");
    puts(s.name);

    printf("Номер билета: %d\n", s.roll);
    printf("Номер группы: %d\n", s.group);

    return EXIT_SUCCESS;
}
