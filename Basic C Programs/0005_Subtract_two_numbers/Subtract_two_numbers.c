#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("Enter number A:");
    scanf("%d", &num1);

    printf("Enter number B:");
    scanf("%d", &num2);

    result = num1 - num2;

    printf("The result of subtraction is %d\n", result);

    return 0;
}