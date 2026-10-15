#include <stdio.h>

int main()
{
    int total_seconds, hours, minutes, seconds;

    printf("Enter seconds:");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    minutes = ( total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    printf("Hour : Minute : Second = %d : %d : %d.", hours, minutes, seconds);

    return 0;
}