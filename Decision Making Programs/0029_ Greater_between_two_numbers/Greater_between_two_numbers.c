#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter number A:");
    scanf("%d", &num1);

    printf("Enter number B:");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("A is greater than B");
    } else
    {
        printf("A is not greater than B");
    }


    return 0;
}