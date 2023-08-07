// #define NDEBUG // disables assert()
#include <assert.h>
#include <errno.h>
#include <inttypes.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    size_t row, column;
    int a[100][100];
    int b[100][100];
    int sum[100][100];

    printf("Введите количество строк от 1 до 100: ");
    scanf("%zu", &row);
    printf("Введите количество колонок от 1 до 100: ");
    scanf("%zu", &column);

    // Заполнение первой матрицы
    puts("\nВведите элементы первой матрицы: ");
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < column; ++j) {
            printf("Введите элемент a[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Заполнение второй матрицы
    puts("\nВведите элементы второй матрицы: ");
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < column; ++j) {
            printf("Введите элемент b[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Сборка результирующей матрицы
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < column; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Отображаем результат
    puts("\nСумма 2-ух матриц: \n");
    for (size_t i = 0; i < row; ++i) {
        putchar('[');
        for (size_t j = 0; j < column; ++j) {
            printf("%3d", sum[i][j]);
        }
        puts("]");
    }

    return EXIT_SUCCESS;
}
