// Exercises'problem: https://url.dscdut.com/kythualaptrinh
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdbool.h>

// 16. calculate as given formular
void main()
{
    float s1 = 0, s2 = 0, s3 = 1, s4 = 0, s5 = 5, s6 = 0, s7 = 0, s8 = 0;
    int temp1 = 1, temp2 = 1;
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i)
    {
        s1 += pow(i, 2);
        s2 += 1 / (2 * i - 1);
        s3 *= i;
        temp1 *= i;
        s4 += temp1;
        s5 += i / ((i + 1) * (i + 2));
        s6 += sqrt(i);
        s7 = i % 2 == 0 ? s7 - temp1 : s7 + temp1;
        if (n % 2 == 0)
        {
            if (i % 2 == 0)
            {
                temp2 *= i;
                s8 += temp2;
            }
        }
        else
        {
            if (i % 2 == 1)
            {
                temp2 *= i;
                s8 += temp2;
            }
        }
    }
    printf("results: \n s1: %f \n s2: %f \n s3: %f \n s4: %f \n s5: %f \n s6: %f \n s7: %f \n s8: %f", s1, s2, s3, s4, s5, s6, s7, s8);
}

// 17. print table of number from 1 to 100
void main()
{
    const int n = 100;
    for (int i = 1; i <= n; i++)
    {
        i % 10 != 0 ? print("%d     ", i) : print("%d\n", i);
    }
}

// 19. 20k from 1k,2k and 5k
void main()
{
    const int quantity = 200000, max_1k_count = 20, max_2k_count = 10, max_5k_count = 4;
    int count = 0;

    for (int i = 0; i <= max_1k_count; ++i)
    {
        for (int j = 0; j <= max_2k_count; j++)
        {
            for (int k = max_5k_count; k <= max_5k_count; k++)
            {
                if (i * 1000 + j * 2000 + k * 5000 == 20000)
                {
                    count++;
                }
            }
        }
    }
    printf("Totally have %d ways to make 20k from 1k, 2k, and 5k.", count);
    return 0;
}

// 20b. draw isosceles triangle.
int main()
{
    int side_dimension;

    printf("Enter the side dimension: ");
    scanf("%d", side_dimension);
    for (int i = 1; i <= side_dimension; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("* ");

        printf("\n");
    }
    return 0;
}

// 21. prime number list
bool isPrime(int i)
{
    if (i == 1 || i == 0)
        return false;
    for (int j = 2; j < i; j++)
    {
        if (i % j == 0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    print("enter your number: ");
    scanf("%d", n);
    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            print("%d   ", i);
    }
    return 0;
}

// 22. Fibonacci sequence
int main()
{
    int n, m = 0, i;
    printf("limit at: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", fibonacci(m));
        m++;
    }
    return 0;
}
int fibonacci(int m)
{
    if (m == 0 || m == 1)
        return m;
    else
        return (fibonacci(m - 1) + fibonacci(m - 2));
}

// 22. count and sum of number's digit
int main()
{
    long n, temp;
    int sum = 0, digit_count = 0;
    printf("enter number: ");
    scanf("%d", &n);

    while (temp != 0)
    {
        sum += temp % 10;
        digit_count++;
        temp = n / 10;
    }
    print("number you just entered have %d and sum of its degits is: %d", digit_count, sum);
}

// 23. Greatest common divisor, least common multiple
int gcd_finder(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void main()
{
    int a, b;
    int gcd, lcm;
    printf("enter 2 number:");
    scanf("%d %d", a, b);

    gcd = gcd_finder(a, b);
    lcm = a * b / gcd;

    printf("greatest common divisor is: ", gcd);
    printf("least common multiple is: ", lcm);
}

// 25. least n that satisfied the formular
void main()
{
    int a, sum = 0;
    int count = 0;
    printf("enter number:");
    scanf("%d", a);

    while (sum < a)
    {
        count++;
        sum += count;
    }
    print("least number: %d", count);
}