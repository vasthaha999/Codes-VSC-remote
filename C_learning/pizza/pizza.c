#include <stdio.h>
#define PI 3.14159
int main()
{
    double area, circum, radius;

    printf("What is a radius of your pizza?\n");
    scanf("%lf", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2lf, area = %1.2lf\n", circum, area);

    return 0;
}