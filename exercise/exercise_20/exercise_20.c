// the addition of plane vector
#include <stdio.h>
int main()
{
    double x1, y1, x2, y2;
    printf("Please input the two vectors (x first and y second):");
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    double x = x1 + x2;
    double y = y1 + y2;
    printf("(%.2lf, %.2lf)\n", x, y);
    return 0;
}