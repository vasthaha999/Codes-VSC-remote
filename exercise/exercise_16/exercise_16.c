// inquire the price of the fruit
#include <stdio.h>
int main()
{
    printf("[1]apple [2]pear [3]orange [4]grape [0]exit\n");
    int n;
    for (int i = 1; i <= 5; i++)
    {
        printf("Please input the number of the item:");
        scanf("%d", &n);
        if (n < 0 || n > 4)
        {
            printf("Invalid number!\n");
        }
        else if (n == 1)
        {
            printf("price = 3.00\n");
        }
        else if (n == 2)
        {
            printf("price = 2.50\n");
        }
        else if (n == 3)
        {
            printf("price = 4.10\n");
        }
        else if (n == 4)
        {
            printf("price = 10.20\n");
        }
        else
        {
            break;
        }
    }
    return 0;
}