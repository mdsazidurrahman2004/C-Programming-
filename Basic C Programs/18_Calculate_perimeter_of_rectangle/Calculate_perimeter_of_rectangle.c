#include <stdio.h>

int main()
{
    float perimeter, length, width;

    printf("Enter rectangle length:");
    scanf("%f", &length);

    printf("Enter rectangle width:");
    scanf("%f", &width);

    perimeter = 2 * ( width + length );

    printf("Triangle area is %.2f", perimeter);

    return 0;
}