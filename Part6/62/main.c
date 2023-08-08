#include <stdio.h>
#include <stdlib.h>

typedef struct complex {
    float real;
    float img;
} complex;


complex add(const complex n1, const complex n2);

int main(int argc, char *argv[])
{
    complex n1, n2, temp;

    puts("Введите комплексное число");
    printf("Введите действительную и мнимую часть соответственно: ");
    scanf("%f %f", &n1.real, &n1.img);

    puts("Второе комплексное число");
    printf("Введите действительную и мнимую часть соответственно: ");
    scanf("%f %f", &n2.real, &n2.img);

    temp = add(n1, n2);
    printf("Сумма = %.1f + %.1f\n", temp.real, temp.img);

    return EXIT_SUCCESS;
}


complex add(const complex n1, const complex n2)
{
    complex temp;

    temp.real = n1.real + n2.real;
    temp.img = n1.img + n2.img;

    return temp;
}
