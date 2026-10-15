#include <stdio.h>
#include <math.h>
int main()
{
    float accumulation, principal, compound_frequency, rate, time;

    printf("Enter the amount of principal:");
    scanf("%f", &principal);

    printf("Enter the amoubt of rate:");
    scanf("%f", &rate);

    printf("Enter the amoubt of compound frequency:");
    scanf("%f", &compound_frequency);

    printf("Enter time:");
    scanf("%f", &time);

    accumulation = principal * pow((1 + (rate / compound_frequency)), (compound_frequency * time));

    printf("Total Accumulation is %.2f", accumulation);

    return 0;
}

