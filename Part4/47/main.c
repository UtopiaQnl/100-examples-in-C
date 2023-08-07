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

void input_sizes(size_t *row_a, size_t *col_a, size_t *row_b, size_t *col_b);

int main(int argc, char *argv[])
{
    int a[10][10], b[10][10], result[10][10];
    size_t row_a, col_a;
    size_t row_b, col_b;

    input_sizes(&row_a, &col_a, &row_b, &col_b);

    while (col_a != row_b) {
        puts("Ошибка! Кол-во колонок первой матрицы не еравно кол-ву строк второй\n");
        input_sizes(&row_a, &col_a, &row_b, &col_b);
    }

    // Вводим элементы 1-ой матрицы
    for (size_t i = 0; i < row_a; ++i) {
        for (size_t j = 0; j < col_a; ++j) {
            printf("Введите элемент a[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    // Вводим элементы 2-ой матрицы
    for (size_t i = 0; i < row_b; ++i) {
        for (size_t j = 0; j < col_b; ++j) {
            printf("Введите элемент b[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    // Заполняем элементы результирующей матрицы нулями
    for (size_t i = 0; i < row_a; ++i) {
        for (size_t j = 0; j < col_b; ++j) {
            result[i][j] = 0;
        }
    }

    // Заполняем результирующую матрицу
    for (size_t i = 0; i < row_a; ++i) {
        for (size_t j = 0; j < col_b; ++j) {
            for (size_t k = 0; k < col_a; ++k) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Отображение результирующей матрицы
    puts("\nРезультат умножения матриц:");
    for (size_t i = 0; i < row_a; ++i) {
        putchar('[');
        for (size_t j = 0; j < col_b; ++j) {
            printf("%5d", result[i][j]);
        }
        puts("]");
    }

    return EXIT_SUCCESS;
}


void input_sizes(size_t *row_a, size_t *col_a, size_t *row_b, size_t *col_b)
{
    printf("Введите количество строк и колонок первой матрицы: ");
    scanf("%zu %zu", row_a, col_a);

    printf("Введите количество строк и колонок второй матрицы: ");
    scanf("%zu %zu", row_b, col_b);
}
