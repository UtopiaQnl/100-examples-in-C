#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    double D, root1, root2, realPart, imagPart;

    puts("Квадратное уравнение вида: ax^2 + bx + c = 0");
    printf("Введите коэффициенты a, b и с: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = (b * b) - (4 * a * c);

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %.2lf и root2 = %.2lf\n", root1, root2);
    } else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf\n", root1);
    } else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-D) / (2 * a);
        printf("root1 = %.2lf+%.2lfi и root2 = %.2lf-%.2fi\n", realPart, imagPart, realPart, imagPart);
    }

    return EXIT_SUCCESS;
}
