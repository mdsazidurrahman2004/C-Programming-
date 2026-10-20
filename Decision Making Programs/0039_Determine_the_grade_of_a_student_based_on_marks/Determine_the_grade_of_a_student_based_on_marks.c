#include <stdio.h>

int main()
{
    int num;

    printf("Enter marks:");
    scanf("%d", &num);

    if ( num <= 0 && 32 >= num)
    {
        printf("Grade F");
    } else if (num >= 33 && 39 >= num)
    {
        printf("Grade D");
    } else if (num >= 40 && 49 >= num)
    {
        printf("Grade C");
    } else if (num >= 50 && 59 >= num)
    {
        printf("Grade B");
    } else if (num >= 60 && 69 >= num)
    {
        printf("Grade A-");
    } else if (num >= 70 && 79 >= num)
    {
        printf("Grade A");
    } else if(num >= 80 && 100 >= num)
    {
        printf("Grade A+");
    }
    
    
    return 0;
}