//
// Created by LENOVO on 2023/10/4.
//
#include <stdio.h>

int GCD(int m, int n);
int main()
{
    printf("Please input two numbers:");
    int a;
    int b;
    scanf("%d%d", &a, &b);
    int m;
    int n;
    if (a == b)
    {
        printf("GCD(%d, %d) = %d", a, b, a);
    }
    else
    {
        m = a > b ? a : b;
        n = a < b ? a : b;
        while (n != 0)
        {
            int c = m;
            int d = n;
            m = d;
            n = c % d;
        }
        printf("GCD(%d, %d) = %d\n", a, b, GCD(m, n));
    }

    return 0;
}
int GCD(int m, int n)
{
    if (n == 0)
    {
        return m;
    }
    else
    {
        return -1;
    }
}