// find the price of electricity
#include <stdio.h>
int main()
{
    double m;
    printf("Please input the electricity that you have used:");
    scanf("%lf", &m);

    if (m <= 0)
    {
        printf("Unvalid Value!");
    }
    else if (m > 0 && m <= 50)
    {
        double a = 0.53 * m;
        printf("You should pay $%.2lf", a);
    }
    else if (m > 50)
    {
        double a = 0.53 * 50;
        double b = (m - 50) * 0.58 + a;
        printf("You should pay $%.2lf", b);
    }

    return 0;
}