#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    printf("Введите число: ");
    scanf("%d", &n);

    for (int i = 0; i <= 10; ++i) {
        printf("%d * %-2d = %d\n", n, i, n * i);
    }

    return EXIT_SUCCESS;
}
