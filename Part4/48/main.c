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
    int a[10][10];
    int transpose[10][10];
    size_t row, col;

    printf("Введите количество строк и стоблцов: ");
    scanf("%zu %zu", &row, &col);

    // Сохраняем элементы
    puts("\nВведите элементы матрицы:");
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            printf("Введите элемент a[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Показываем a[][]
    puts("\nИсходная матрица: ");
    for (size_t i = 0; i < row; ++i) {
        putchar('[');
        for (size_t j = 0; j < col; ++j) {
            printf("%5d", a[i][j]);
        }
        puts("]");
    }

    // Вычисляем транспонированную матрицу
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            transpose[j][i] = a[i][j];
        }
    }

    // Выводим результат
    puts("\nТранспонированная матрица: ");
    for (size_t i = 0; i < col; ++i) {
        putchar('[');
        for (size_t j = 0; j < row; ++j) {
            printf("%5d", transpose[i][j]);
        }
        puts("]");
    }


    return EXIT_SUCCESS;
}
