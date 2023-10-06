// judging the leap year
#include <stdio.h>
int LeapYear(int i);
int main()
{
    int ddl;
    printf("Please input the deadline:");
    scanf("%d", &ddl);
    if (ddl > 2999 || ddl < 2000)
    {
        printf("Invalid year!");
    }
    else
    {
        for (int i = 2000; i <= ddl; i++)
        {
            LeapYear(i);
        }
    }
    return 0;
}
int LeapYear(int i)
{
    if (i % 400 == 0)
    {
        printf("%d ", i);
    }
    else if (i % 4 == 0 && i % 100 != 0)
    {
        printf("%d ", i);
    }
}