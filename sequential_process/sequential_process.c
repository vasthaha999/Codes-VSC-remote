// 顺序流程的不同片段
#include <stdio.h>
int main()
{
    int a = 1, sum1 = 0;
    a = a + 1;
    sum1 = sum1 + a;
    printf("sum1 = %d\n", sum1);

    int b = 1, sum2 = 0;
    sum2 = sum2 + b;
    b = b + 1;
    printf("sum2 = %d\n", sum2);
    return 0;
}