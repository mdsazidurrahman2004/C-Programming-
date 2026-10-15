#include <stdio.h>

int main()
{
    int electricity_used, price_per_unit, electricity_bill;

    printf("Enter used electricity:");
    scanf("%d", &electricity_used);

    printf("Enter price per unit:");
    scanf("%d", &price_per_unit);

    electricity_bill = electricity_used * price_per_unit;

    printf("Electricity bill is %d", electricity_bill);

    return 0;
}