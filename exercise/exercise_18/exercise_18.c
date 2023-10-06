// punishment for overspeed
#include <stdio.h>

int main()
{
    int std, spd;
    printf("Please input the standard speed and your car's speed:");
    scanf("%d%d", &std, &spd);
    if (spd < 0 || std <= 0)
    {
        printf("Invalid speed!");
    }
    else if (spd >= 0 && spd < std + std * 0.1)
    {
        printf("OK");
    }
    else if (spd >= std + std * 0.1 && spd < std + std * 0.5)
    {
        printf("Exceed %.0lf%%. Ticket 200.", (spd * 1.0 / std - 1) * 100);
    }
    else if (spd >= std + std * 0.5)
    {
        printf("Exceed %.0lf%%. License revoked.", (spd * 1.0 / std - 1) * 100);
    }
    return 0;
}