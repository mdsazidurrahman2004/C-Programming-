#include <stdio.h>

int main()
{
    int total_days, days, months, years;

    printf("Enter days:");
    scanf("%d", &total_days);

    years = total_days / 365;
    months = ( total_days % 365) / 30;
    days = total_days % 30;

    printf("Years : Months : Days = %d : %d : %d", years, months, days);

    return 0;
}