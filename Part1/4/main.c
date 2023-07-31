#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double firstNumber = 0.0;
    double secondNumber = 0.0;
    double product = 0.0;
    printf("Введите два числа: ");

    // Читаем 2 вещественных числа функцией scanf()
    scanf("%lf %lf", &firstNumber, &secondNumber);

    // Результат умножения сохраняем в переменную product
    product = firstNumber * secondNumber;

    // Выводим резульатат, после запятой 2 занака, формат %.2lf
    printf("Product = %.2lf\n", product);

    return EXIT_SUCCESS;
}
