#include <stdio.h>

int main()
{
    float simple_interest, principal, rate, time;

    printf("Enter the amount of principal:");
    scanf("%f", &principal);

    printf("Enter the amoubt of rate:");
    scanf("%f", &rate);

    printf("Enter time:");
    scanf("%f", &time);

    simple_interest = ( principal * rate * time ) / 100 ;

    printf("Simple interest is %.2f", simple_interest);

    return 0;
}