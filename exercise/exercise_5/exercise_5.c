// prime divisor
#include <stdio.h>
int main()
{
    int m;
    printf("Please input a number(the number must be no less than 2):");
    scanf("%d", &m);

    // the usage of "goto":
    // A:
    //     for (int i = 2; i <= m; i++)
    //     {
    //         if (m % i == 0)
    //         {
    //             printf("%d ", i);
    //             m = m / i;
    //             goto A;
    //         }
    //     }

    for (int i = 2; i <= m; i++)
    {
        while (m != 1) // the sentence "while" is used to avoid the mistaken rise of "i"
        {
            if (m % i == 0)
            {
                m /= i;
                printf("%d ", i);
            }
            else
                break;
        }
    }
    return 0;
}