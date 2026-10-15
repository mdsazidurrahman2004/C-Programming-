#include <stdio.h>

int main()
{
    int gross_salary, basic_salary, other_allowance;

    printf("Enter basic salary:");
    scanf("%d", &basic_salary);

    printf("Enter other allowance:");
    scanf("%d", &other_allowance);

    gross_salary = basic_salary + other_allowance;

    printf("Gross salary is %d", gross_salary);

    return 0;
}