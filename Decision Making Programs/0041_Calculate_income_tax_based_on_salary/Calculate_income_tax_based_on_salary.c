#include <stdio.h>

int main()
{
    int salary, tax;

    printf("Enter annual salary amount:");
    scanf("%d", &salary);

    if ( salary >= 0 && salary <= 30000 )
    {
        tax = ( salary * 0) / 100;
         printf("Tax amount is %d", tax);
    } else if ( salary >= 30001 && salary <= 50000 )
    {
        tax = ( salary * 10) / 100;
         printf("Tax amount is %d", tax);
    } else if ( salary >= 50001 && salary <= 100000 )
    {
        tax = ( salary * 20) / 100;
         printf("Tax amount is %d", tax);
    } else if ( salary >= 100001 )
    {
        tax = ( salary * 30) / 100;
         printf("Tax amount is %d", tax);
    } else 
    {
        printf("Invalid salary amount");
    }
    
    
    return 0;
}