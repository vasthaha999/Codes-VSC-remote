// print the numbers from the smaller to the bigger
#include <stdio.h>
int main()
{
    printf("Please input three numbers:");
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int temp_min = a < b ? a : b;
    int min = temp_min < c ? temp_min : c;
    if (min == a)
    {
        if (b < c)
        {
            printf("%d < %d < %d", a, b, c);
        }
        else
        {
            printf("%d < %d < %d", a, c, b);
        }
    }
    else if (min == b)
    {
        if (a < c)
        {
            printf("%d < %d < %d", b, a, c);
        }
        else
        {
            printf("%d < %d < %d", b, c, a);
        }
    }
    else if (min == c)
    {
        if (a < b)
        {
            printf("%d < %d < %d", c, a, b);
        }
        else
        {
            printf("%d < %d < %d", c, b, a);
        }
    }
    return 0;
}