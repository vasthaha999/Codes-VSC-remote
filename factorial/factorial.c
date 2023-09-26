// 求阶乘
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Please enter a number:");
    int a;
    int x, y = 1;
    scanf("%d", &a);
    for (x = 1; x <= a; x++)
    {
        y *= x;
    }
    printf("The factorial is %d", y);
    return 0;
}