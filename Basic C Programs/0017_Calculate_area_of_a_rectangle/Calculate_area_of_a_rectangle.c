#include <stdio.h>

int main()
{
    float Area, length, width;

    printf("Enter rectangle length:");
    scanf("%f", &length);

    printf("Enter rectangle width:");
    scanf("%f", &width);

    Area = width * length ;

    printf("Triangle area is %.2f", Area);

    return 0;
}