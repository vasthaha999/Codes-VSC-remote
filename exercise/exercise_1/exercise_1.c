// the maximum divisor and the minimum common multiple
#include <stdio.h>
int main()
{
    printf("Please enter two numbers:");
    int a, b;
    scanf("%d%d", &a, &b);

    int m = (a > b) ? a : b;
    for (int i = m;; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            printf("The minimum common multiple is %d.\n", i);
            break;
        }
    }

    int n = (a < b) ? a : b;
    for (int i = n;; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            printf("The maximum divisor is %d.\n", i);
            break;
        }
    }

    return 0;
}