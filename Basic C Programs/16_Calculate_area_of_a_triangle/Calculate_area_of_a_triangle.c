#include <stdio.h>

int main()
{
    float Area, base, height;

    printf("Enter triangle base:");
    scanf("%f", &base);

    printf("Enter triangle height:");
    scanf("%f", &height);

    Area = ( 1.0/2.0 ) * base * height ;

    printf("Triangle area is %.2f", Area);

    return 0;
}