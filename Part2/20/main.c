#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n, f = 1;
    printf("Введите количество элементов последовательности: ");
    scanf("%d", &n);

    printf("Последовательность Фибоначчи: ");

    for (int f1 = 0, f2 = 1; n-- > 0; f1 = f2, f2 = f) {
        printf("%d ", f);
        f = f1 + f2;
    }
    putchar('\n');

    return EXIT_SUCCESS;
}
