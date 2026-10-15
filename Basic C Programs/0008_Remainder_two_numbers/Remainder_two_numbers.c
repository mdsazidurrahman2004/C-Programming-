#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("Enter number A:");
    scanf("%d", &num1);

    printf("Enter number B:");
    scanf("%d", &num2);

    result = num1 % num2;

    printf("The remainder of A and B is %d\n", result);

    return 0;
}