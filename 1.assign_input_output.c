// Exercises'problem: https://url.dscdut.com/kythualaptrinh
#include <stdio.h>
#include <conio.h>
#include <math.h>

// 1: replace a and b's values
void main(void)
{
    int a, b, c;

    printf("Enter an integer for variable a: ");
    scanf("%d", &a);
    printf("Enter an integer for variable b: ");
    scanf("%d", &b);
    c = a;
    b = c;
    a = b;

    printf("variable a: %d", a);
    printf("variable b: %d", b);
}

// 4. surface area and volume of a sphere
void main(void)
{
    float R, V, S;
    float pi = 3.14;

    printf("Enter the radius of sphere: ");
    scanf("%f", &R);

    V = 4 / 3 * pi * pow(R, 3);
    S = 4 * pi * pow(R, 2);

    printf("Volume is: ", V);
    printf("Surface area is: ", S);
}

// 7. calculate as given formular
float log_x_to_base_y(float x, float y)
{
    return log(x) / log(y); // =>> logy(x)
}
void main(void)
{
    float x;
    printf("Enter x: ");
    scanf("%f", &x);

    float a = pow(2, x) - 1;
    float b = log_x_to_base_y((pow(x, 3) + pow(4, x)), 5) + log(pow(5, x));

    float y = (pow(x, 5) - sin(a) + exp(3)) / (pow(b, x + 2) + 1);

    printf("value of the formular is: %f", y);
}