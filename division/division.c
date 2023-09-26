// 求两个数相除的商
#include <stdio.h>
#include <stdlib.h>
int main()
{
    float a, b, c;
    printf("Please enter two numbers:");
    scanf("%f%f", &a, &b);
    c = a / b;
    printf("The division is: %.3f\n", c);
    return 0;
}