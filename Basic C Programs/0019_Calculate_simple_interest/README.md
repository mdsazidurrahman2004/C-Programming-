# Simple Interest Calculation

This is a basic C program that takes the principal amount, rate of interest, and time as input from the user using the `scanf()` function and calculates simple interest.

The program uses `float` variables to store the simple interest, principal, rate, and time. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the principal amount, rate of interest, and time as input. The `%f` format specifier is used because the variables `principal`, `rate`, and `time` are declared as `float`.

The statement `simple_interest = (principal * rate * time) / 100;` calculates simple interest using the formula: **Simple Interest = (Principal × Rate × Time) / 100**. The `*` operator is used for multiplication, and the `/` operator is used for division. The calculated result is stored in the `simple_interest` variable.

The `printf()` function displays the calculated simple interest. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter the amount of principal: 4000

Enter the amount of rate: 3

Enter time: 2

Simple interest is 240.00