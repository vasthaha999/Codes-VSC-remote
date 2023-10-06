// count the characters
#include <stdio.h>
int main()
{
    char str[10];
    int letter = 0;
    int blank = 0;
    int digit = 0;
    int other = 0;
    printf("Please input 10 characters:");
    for (int i = 0; i <= 9; i++)
    {
        scanf("%c", &str[i]);
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
        {
            letter++;
        }
        else if (str[i] == ' ' || str[i] == '\n')
        {
            blank++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else
        {
            other++;
        }
    }
    printf("letter = %d\nblank = %d\ndigit = %d\nother = %d\n", letter, blank, digit, other);
    return 0;
}