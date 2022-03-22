// Exercises'problem: https://url.dscdut.com/kythualaptrinh
#include <stdio.h>
#include <conio.h>
#include <math.h>
// 10. solve the quadratic equations
int main()
{
    float a, b, c;
    float d, first_root, second_root;

    printf("Enter quadratic equation in the format ax^2 + bx + c: ");
    scanf("% fx ^ 2 % fx % f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d < 0)
    {
        printf("Roots are complex number.\n");
        return 0;
    }

    first_root = (-b + sqrt(d)) / (2 * a);
    second_root = (-b - sqrt(d)) / (2 * a);
    printf("Roots of quadratic equation will be: % .3f, % .3f", first_root, second_root);

    return 0;
}

// 12. check triangle
void main()
{
    int side1, side2, side3;
    printf("Enter three sides of triangle: \n");
    scanf("%d%d%d", &side1, &side2, &side3);

    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
        if (side1 == side2 || side1 == side3 || side2 == side3)
        {
            if (side1 == side2 && side2 == side3)
            {
                /* If all sides are equal */
                printf("Equilateral triangle.");
            }
            else if ((side1 * side1) + (side2 * side2) == (side3 * side3) || (side1 * side1) + (side3 * side3) == (side2 * side2) || (side2 * side2) + (side3 * side3) == (side1 * side1))
            {
                printf("Isosceles right triangle");
            }
            else
            {
                printf("Isosceles triangle.");
            }
        }
        else if ((side1 * side1) + (side2 * side2) == (side3 * side3) || (side1 * side1) + (side3 * side3) == (side2 * side2) || (side2 * side2) + (side3 * side3) == (side1 * side1))
        {
            printf("Right triangle");
        }
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}

// 14. find weekday
void main()
{
    int input_date;
    printf("Enter date: ");
    scanf("%d", &input_date);

    if (input_date < 1 || input_date > 31)
    {
        printf("valid date must be from 1 to 31");
        return 0;
    }
    else
    {
        const char *weekdate[7] = {
            "wednesday",
            "tuesday",
            "monday",
            "sunday",
            "saturday",
            "friday",
            "thursday",
        };

        const int wednesday_index = 3;
        int date_index = (24 - input_date) % 7;

        printf("The week date is: %s", weekdate[wednesday_index]);
    }
}

// 15. calculate as given formular
void main()
{
    int x;
    printf("Enter x: ");
    scanf("%f", &x);

    float formular_with_x_gt_zero = -1 / (2 * pow(x, 3));
    float formular_with_x_lte_zero = 3 * sqrt(abs(x));

    print("result: %f", x > 0 ? formular_with_x_gt_zero : formular_with_x_lte_zero);
}