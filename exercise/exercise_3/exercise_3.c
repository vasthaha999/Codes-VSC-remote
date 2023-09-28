// output the inverted triangle pattern
#include <stdio.h>

int main()
{
    printf("Please enter the height of the pattern:");
    int h;
    scanf("%d", &h);
    for (int i = h; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
            if (j == i)
            {
                printf("\n");
            }
        }
    }
    return 0;
}