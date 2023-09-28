// finding the combinational number
#include <stdio.h>

int Factorial(int i);

int main()
{
    int a, b;
    printf("Please enter 2 numbers:");
    scanf("%d%d", &a, &b);

    if (a == 0)
    {
        printf("1\n");
    }
    else
    {
        int f = Factorial(a) * Factorial(b - a);
        double result = Factorial(b) / f;
        printf("%.0lf", result);
    }
    return 0;
}
int Factorial(int i)
{
    int p = 1;
    for (int j = 1; j <= i; j++)
    {
        p *= j;
    }
    return p;
}