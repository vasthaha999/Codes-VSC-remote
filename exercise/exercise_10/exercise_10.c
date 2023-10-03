// find the sum of square and reciprocal
#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    double s;
    printf("Please input two numbers:");
    scanf("%d%d", &m, &n);
    int a = m < n ? m : n;
    int b = m > n ? m : n;
    double s1 = 0;
    double s2 = 0;

    for (int i = a; i <= b; i++)
    {
        s1 += pow(i, 2);
        s2 += 1.0 / i;
    }
    printf("sum = %.6lf", s1 + s2);
    return 0;
}