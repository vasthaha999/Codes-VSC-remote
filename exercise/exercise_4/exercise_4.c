// print a stars pyramid
#include <stdio.h>
int main()
{
    int h;
    printf("Please input the height:");
    scanf("%d", &h);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h + 1 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}