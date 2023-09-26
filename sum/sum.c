// 求两个数字的和
#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Please enter two numbers:");
    float a, b, c;
    scanf("%f%f", &a, &b);
    c = a + b;
    printf("The sum is %.2f\n", c);
    system("pause");
    return 0;
}