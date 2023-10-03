// table of power
#include <stdio.h>
#include <math.h>
int main()
{
    printf("Please input the maximum: ");
    int m;
    scanf("%d", &m);
    for (int i = 0; i <= m; i++)
    {
        printf("pow(3, %d) = %.0lf\n", i, pow(3, i));
    }

    return 0;
}