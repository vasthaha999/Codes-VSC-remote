// 判断三角形形状
#include <stdio.h>
#include <stdbool.h>
int main()
{
    double a, b, c;
    printf("Please input 3 sides:");
    scanf("%lf%lf%lf", &a, &b, &c);
    if (a + b > c && a + c > b && b + c > a)
    {
        if (a == b == c)
        {
            printf("It's a equilateral triangle.");
        }
        else
        {
            bool isright = (a * a + b * b == c * c ||
                            a * a + c * c == b * b ||
                            b * b + c * c == a * a);
            bool isisosceles = (a == b || b == c || c == a);
            printf("%s %s triangle.", isright ? "right" : "", isisosceles ? "isosceles" : "");
        }
    }
    else
    {
        printf("It's not a triangle!");
    }
    return 0;
}