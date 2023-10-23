//равнобедренный треугольник
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>
float area_triangleravn(float a, float b) {
    float h = sqrt(pow(a,2) - pow(b/2,2));
    return 0.5 * b * h;
}
void name() {
    printf("Равнобедренный треугольник - это треугольник, у которого две стороны равны, и два угла равны.\n");
}
void draw_triangleravn(int h) {
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}
int main() {
    int c;
    float a, b;
    setlocale(LC_ALL, "RUS");
    printf("Введите длину основания треугольника: ");
    scanf("%f", &a);
    printf("Введите длину боковой стороны треугольника: ");
    scanf("%f", &b);
    printf("Выберите операцию:\n");
    printf("1) Рассчитать площадь\n");
    printf("2) Вывести определение фигуры\n");
    printf("3) Нарисовать фигуру\n");
    printf("Ваш выбор: ");
    scanf("%d", &c);
    switch (c) {
    case 1:
        printf("Площадь треугольника: %.2f\n", area_triangleravn(a, b));
        break;
    case 2:
        name();
        break;
    case 3:
        printf("Введите высоту треугольника: ");
        int h;
        scanf("%d", &h);
        draw_triangleravn(h);
        break;
    default:
        printf("Неверный выбор\n");
    }
}