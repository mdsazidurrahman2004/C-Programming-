#include <stdio.h>

int main()
{
    int num1, num2, sum;

    printf("Enter number A:");
    scanf("%d", &num1);

    printf("Enter number B:");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("The sum of A and B is %d\n", sum);

    return 0;
}