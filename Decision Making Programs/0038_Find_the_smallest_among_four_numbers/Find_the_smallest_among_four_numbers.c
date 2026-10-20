#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter number A:");
    scanf("%d", &a);

    printf("Enter number B:");
    scanf("%d", &b);

    printf("Enter number C:");
    scanf("%d", &c);

    printf("Enter number D:");
    scanf("%d", &d);

    if ( a <= b && a <= c && a <= d  )
    {
        printf("%d is the largest among three numbers", a);
    } else if ( b <= a && b <= c && b <= d  )
    {
        printf("%d is the largest among three numbers", b);
    } else if ( c <= a && c <= b && c <= d  )
    {
        printf("%d is the largest among three numbers", c);
    } else
    {
        printf("%d is the largest among three numbers", d);
    }

    return 0;
}