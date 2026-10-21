#include <stdio.h>
int main(void)
{
    int hour, minute;

    printf("enter 24h time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour == 0)
        printf("12 hr time: 12:%02d AM\n", minute);
    else if (hour < 12)
        printf("12 hr time: %d:%02d AM\n", hour, minute);
    else if (hour == 12)
        printf("12 hr time: 12:%02d PM\n", minute);
    else
        printf("12 hr time: %d:%02d PM\n", hour - 12, minute);

    return 0;
}