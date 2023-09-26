// 用函数求两个数字的和
#include <stdio.h>
#include <stdlib.h>
int product(int, int);
int main(void)
{
    int x, y, s;
    printf("Please enter two numbers:");
    scanf("%d%d", &x, &y);
    s = product(x, y);
    printf("The sum is %d", s);
    return 0;
}
int product(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}