#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter the length of A:");
    scanf("%d", &a);
    printf("Enter the length of B:");
    scanf("%d", &b);
    printf("Enter the length of C:");
    scanf("%d", &c);

    if ( a == b &&  b == c)
    {
        printf ("The triangle is a Equilateral");
    } else if ( a == b || a == c || b == c )
    {
        printf("The triangle is an Isosceles");
    } else if ( a != b && b != c && c != a)
    {
        printf("The triangle is a Scalene");
    }
    
    
    return 0;
}