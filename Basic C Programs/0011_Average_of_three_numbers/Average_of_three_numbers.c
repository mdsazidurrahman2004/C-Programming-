#include <stdio.h>

int main()
{
    float num1, num2, num3, average;

    printf("Enter number A:");
    scanf("%f", &num1);
    printf("Enter number B:");
    scanf("%f", &num2);
    printf("Enter number C:");
    scanf("%f", &num3);

    average = (num1 + num2 + num3)/3;

    printf("The average of A, B and C is %.2f", average);


    return 0;
}