// time conversion
#include <stdio.h>
int main()
{
    int hour, min, sec;
    int pass;
    printf("Please input the time to start:");
    scanf("%d:%d:%d", &hour, &min, &sec);
    printf("Please input the elapsed time (in seconds):");
    scanf("%d", &pass);
    int sumsec = hour * 3600 + min * 60 + sec + pass;
    if (sumsec < 86400)
    {
        int newhour = sumsec / 3600;
        int newmin = sumsec % 3600 / 60;
        int newsec = sumsec - newhour * 3600 - newmin * 60;
        printf("%.2d:%.2d:%.2d", newhour, newmin, newsec);
    }
    else
    {
        int newsum = sumsec - 86400;
        int newhour = newsum / 3600;
        int newmin = newsum % 3600 / 60;
        int newsec = newsum - newhour * 3600 - newmin * 60;
        printf("%.2d:%.2d:%.2d", newhour, newmin, newsec);
    }
    return 0;
}