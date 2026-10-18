#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter number A:");
    scanf("%d", &a);

    printf("Enter number B:");
    scanf("%d", &b);

    printf("Enter number C:");
    scanf("%d", &c);

    if ( a >= b && a>= c  )
    {
        printf("%d is the largest among three numbers", a);
    } else if ( b >= a && b >= c  )
    {
        printf("%d is the largest among three numbers", b);
    } else
    {
        printf("%d is the largest among three numbers", c);
    }
    
    return 0;
}