# Electricity Bill Calculation

This is a basic C program that takes the amount of electricity used and the price per unit as input from the user using the `scanf()` function and calculates the electricity bill.

The program uses `int` variables to store the electricity used, price per unit, and electricity bill. The `int` data type is used because these values are whole numbers.

The `scanf()` function is used to take the electricity consumption and price per unit as input. The `%d` format specifier is used because the variables `electricity_used` and `price_per_unit` are declared as `int`.

The statement `electricity_bill = electricity_used * price_per_unit;` calculates the electricity bill by multiplying the total electricity used by the price per unit. The `*` operator is used for multiplication, and the calculated result is stored in the `electricity_bill` variable.

The `printf()` function displays the calculated electricity bill. The `%d` format specifier is used to display the integer value of the electricity bill.

**Note:** This program calculates the bill using only electricity consumption and price per unit. It does not include additional charges, taxes, or slab-based pricing that may apply to an actual electricity bill.

## Output

Enter used electricity: 100

Enter price per unit: 7

Electricity bill is 700