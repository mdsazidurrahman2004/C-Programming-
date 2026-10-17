#include <stdio.h>

int main()
{
    int age, eligible_age;

    printf("Enter age:");
    scanf("%d", &age);

    printf("Enter eligible age to vote:");
    scanf("%d", &eligible_age);

    if ( age >= eligible_age)
    {
        printf("This person is eligible to vote");
    } else{
        printf("This person is no eligible to vote");
    }
    
    return 0;
}