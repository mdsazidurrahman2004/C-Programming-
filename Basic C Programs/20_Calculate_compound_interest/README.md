# Compound Interest Calculation

This is a basic C program that takes the principal amount, rate of interest, compound frequency, and time as input from the user using the `scanf()` function and calculates the total accumulated amount using the compound interest formula.

The program uses `float` variables to store the accumulation, principal, compound frequency, rate, and time. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the principal amount, rate of interest, compound frequency, and time as input. The `%f` format specifier is used because all these variables are declared as `float`.

The `#include <math.h>` header file is used to access the `pow()` function, which calculates the power of a number.

The statement `accumulation = principal * pow((1 + (rate / compound_frequency)), (compound_frequency * time));` calculates the total accumulated amount using the compound interest formula:

**A = P × (1 + r/n)^(nt)**

Here, `P` represents the principal amount, `r` represents the annual interest rate in decimal form, `n` represents the number of compounding periods per year, and `t` represents the time in years. The `pow()` function calculates the power, and the final result is stored in the `accumulation` variable.

The `printf()` function displays the total accumulated amount. The `%.2f` format specifier displays the result with two digits after the decimal point.

**Note:** The rate must be entered in decimal form. For example, 5% should be entered as `0.05`. The compound frequency should represent how many times interest is compounded per year. For example, quarterly compounding uses `4`.

## Output

Enter the amount of principal: 4000

Enter the amount of rate: 0.05

Enter the amount of compound frequency: 4

Enter time: 3

Total Accumulation is 4643.02