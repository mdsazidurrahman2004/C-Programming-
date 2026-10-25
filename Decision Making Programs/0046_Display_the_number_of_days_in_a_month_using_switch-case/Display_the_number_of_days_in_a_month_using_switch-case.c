#include <stdio.h>

int main()
{
    int month, year;

    printf("Enter any month (1-12): ");
    scanf("%d", &month);

    printf("Enter Year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
        printf("31 days in January.\n");
        break;
    case 2:
        if( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 ){
            printf("29 days in February (Leap Year).\n");
        } else {
            printf("28 days in February.\n");
        }
        break;
    case 3:
        printf("31 days in March.\n");
        break;
    case 4:   
        printf("30 days in April.\n");
        break;
    case 5:
        printf("31 days in May.\n");
        break;
    case 6:   
        printf("30 days in June.\n");
        break;
    case 7:
        printf("31 days in July.\n");
        break;
    case 8:
        printf("31 days in August.\n");
        break;
    case 9:
        printf("30 days in September.\n");
        break;
    case 10:   
        printf("31 days in October.\n");
        break;
    case 11:
        printf("30 days in November.\n");
        break;
    case 12:   
        printf("31 days in December.\n");
        break;

    default:
        printf("invalid month.\n");
        break;
    }

    return 0;
}