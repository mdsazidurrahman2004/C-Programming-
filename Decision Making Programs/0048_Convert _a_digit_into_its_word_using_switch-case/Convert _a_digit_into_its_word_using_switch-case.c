#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number(0-9): ");
    scanf("%d", &num);

    switch (num)
    {
    case 0:
        printf("This is Zero");
        break;
    case 1:
        printf("This is one");
        break;
    case 2:
        printf("This is Two");
        break;
    case 3:
        printf("This is Three");
        break;
    case 4:
        printf("This is Four");
        break;
    case 5:
        printf("This is Five");
        break;
    case 6:
        printf("This is Six");
        break;
    case 7:
        printf("This is Seven");
        break;
    case 8:
        printf("This is Eight");
        break;
    case 9:
        printf("This is Nine");
        break;

    default:
     printf("This is invalid");
        break;
    }
}