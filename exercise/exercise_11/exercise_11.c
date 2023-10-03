// find the result of the sentence: 1 - 2/3 + 3/5 - 4/7 + 5/9 - 6/11 + ...
#include <stdio.h>
int main()
{
    int n;
    printf("Please input a number:");
    scanf("%d", &n);
    double s;
    for (int i = 1; i <= n; i++)
    {
        double a, b;
        if (i % 2 != 0)
        {
            a = 2.0 * i - 1.0;
            b = i / a;
        }
        else
        {
            a = 2.0 * i - 1.0;
            b = -i / a;
        }
        s += b;
    }
    printf("sum = %.3lf", s);
    return 0;
}