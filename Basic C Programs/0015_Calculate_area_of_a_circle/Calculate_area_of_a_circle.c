#include <stdio.h>

int main()
{
    float Area, radius;

    printf("Enter circle radius:");
    scanf("%f", &radius);

    Area = 3.14159 * radius ;

    printf("Circle area is %.2f", Area);

    return 0;
}