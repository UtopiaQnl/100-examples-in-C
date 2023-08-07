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

void enterData(size_t row1, size_t col1, size_t row2, size_t col2, int firstM[row1][col1], int secondM[row2][col2]);
void display(size_t row, size_t col, int M[row][col]);
void multiplyMatrices(size_t row1, size_t col1, size_t row2, size_t col2, int firstM[row1][col1],
                      int secondM[row2][col2], int result[row1][col2]);


int main(int argc, char *argv[])
{
    int A[10][10], B[10][10], mult[10][10];
    size_t row1, col1;
    size_t row2, col2;

    printf("Введите количество строк и колонов для матрицы 1: ");
    scanf("%zu %zu", &row1, &col1);

    printf("Введите количество строк и колонов для матрицы 2: ");
    scanf("%zu %zu", &row2, &col2);

    while (col1 != row2) {
        puts("Ошибка! Кол-во колонок первой матрицы не равно кол-ву строк второй.");
        printf("Введите количество строк и колонов для матрицы 1: ");
        scanf("%zu %zu", &row1, &col1);

        printf("Введите количество строк и колонов для матрицы 2: ");
        scanf("%zu %zu", &row2, &col2);
    }

    enterData(row1, col1, row2, col2, A, B);

    multiplyMatrices(row1, col1, row2, col2, A, B, mult);

    display(row1, col2, mult);

    return EXIT_SUCCESS;
}


void enterData(size_t row1, size_t col1, size_t row2, size_t col2, int firstM[row1][col1], int secondM[row2][col2])
{
    puts("\nВведите элементы матрицы 1:");
    for (size_t i = 0; i < row1; ++i) {
        for (size_t j = 0; j < col1; ++j) {
            printf("Введите элемент a[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &firstM[i][j]);
        }
    }
    puts("\nВведите элементы матрицы 2:");
    for (size_t i = 0; i < row2; ++i) {
        for (size_t j = 0; j < col2; ++j) {
            printf("Введите элемент b[%zu][%zu]: ", i + 1, j + 1);
            scanf("%d", &secondM[i][j]);
        }
    }
}


void multiplyMatrices(size_t row1, size_t col1, size_t row2, size_t col2, int firstM[row1][col1],
                      int secondM[row2][col2], int result[row1][col2])
{
    for (size_t i = 0; i < row1; ++i) {
        for (size_t j = 0; j < col2; ++j) {
            result[i][j] = 0;
        }
    }

    for (size_t i = 0; i < row1; ++i) {
        for (size_t j = 0; j < col2; ++j) {
            for (size_t k = 0; k < col1; ++k) {
                result[i][j] += firstM[i][k] * secondM[k][j];
            }
        }
    }
}


void display(size_t row, size_t col, int M[row][col])
{
    for (size_t i = 0; i < row; ++i) {
        putchar('[');
        for (size_t j = 0; j < col; ++j) {
            printf("%5d", M[i][j]);
        }
        puts("]");
    }
}
