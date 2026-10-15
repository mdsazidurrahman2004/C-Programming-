#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter number A:");
    scanf("%d", &num1);

    printf("Enter number B:");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping, number A is %d\n", num1);
    printf("After swapping, number B is %d\n", num2);

    return 0;
}