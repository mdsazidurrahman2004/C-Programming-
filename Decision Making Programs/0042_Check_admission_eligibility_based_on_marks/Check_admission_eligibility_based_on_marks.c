#include <stdio.h>

int main()
{
    int bangla, english, mathematics;

    printf("Enter bangla marks:");
    scanf("%d", &bangla);

    printf("Enter english marks:");
    scanf("%d", &english);

    printf("Enter mathematics marks:");
    scanf("%d", &mathematics);

    if ( english >= 50 && bangla >= 50 && mathematics >= 60 )
    {
        printf("Eligible for admission.");
    } else {
        printf("Not eligible for admission");
    }
    
    
    return 0;
}