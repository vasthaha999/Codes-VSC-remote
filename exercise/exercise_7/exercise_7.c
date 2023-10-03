// find the sum of interlaced sequences
#include <stdio.h>

float Num(int i);

int main()
{
    printf("Please input the number of items:");
    int i;
    double sum = 0;
    scanf("%d", &i);
    for (int j = 1; j <= i; j++)
    {
        sum += Num(j);
    }
    printf("%.3lf", sum);

    return 0;
}

float Num(int i)
{
    if (i % 2 == 0)
    {
        float b = 3 * i - 2;
        float c = 1 / b;
        float d = 0 - c;
        return d;
    }
    else
    {
        float b = 3 * i - 2;
        float c = 1 / b;
        return c;
    }
}