#include <stdio.h>

int main()
{
    int second, minute, hour;

    printf("Enter seconds:");
    scanf("%d", &second);

    minute = second / 60;

    printf("In minutes= %d", minute);

    hour = minute / 60;

    printf("In hours= %d", hour);


    return 0;
}