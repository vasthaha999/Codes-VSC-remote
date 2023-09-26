#include <stdio.h>
#include <stdbool.h>
int main()
{
    int num = 0;

    printf("Number:");
    scanf("%d", &num);

    bool is_even = (num % 2 == 0);
    printf("\"%d\" is %s an even number.\n", num, is_even ? "" : "not");

    return 0;
}