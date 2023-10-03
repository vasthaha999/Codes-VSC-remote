#include <stdio.h>
#define PRAISE "You are an extraordinary being."
int main()
{
    char name[40];

    printf("What's your name? ");
    scanf("%s", name); // when encountering the first space, the computer will not continue inputing
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}