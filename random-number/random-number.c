// 生成随机数
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand((unsigned)time(NULL));
    int n = rand();
    printf("%d\n", n);

    return 0;
}