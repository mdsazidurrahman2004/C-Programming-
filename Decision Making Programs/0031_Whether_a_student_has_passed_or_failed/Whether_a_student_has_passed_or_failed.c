#include <stdio.h>

int main()
{
    float bangla, english, math, pass_mark;

    printf("Enter Bangla mark:");
    scanf("%f", &bangla);

    printf("Enter English mark:");
    scanf("%f", &english);

    printf("Enter  Math mark:");
    scanf("%f", &math);

    printf("Enter  pass mark:");
    scanf("%f", &pass_mark);


    if ( pass_mark <= bangla && pass_mark <= english && pass_mark <= math )
    {
        printf("The student has passed");
    } else{
        printf("The student has failed");
    }
    
    return 0;
}