// signum function
#include <stdio.h>
int main()
{
    int n;

    printf("Please input an integer:");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("sign(%d) = -1", n);
    }
    else if (n == 0)
    {
        printf("sign(%d) = 0", n);
    }
    else
    {
        printf("sign(%d) = 1", n);
    }

    return 0;
}