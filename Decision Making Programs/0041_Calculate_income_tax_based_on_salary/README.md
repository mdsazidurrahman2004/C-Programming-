# Calculate Income Tax Based on Salary

This is a basic C program that takes a person's annual salary as input from the user using the `scanf()` function and calculates the tax amount based on the salary range. It also checks whether the entered salary is valid.

The program uses two `int` variables named `salary` and `tax` to store the annual salary and calculated tax amount. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take the annual salary as input from the user. The `%d` format specifier is used because the variable `salary` is declared as `int`.

The `if` statement checks whether the salary is between 0 and 30,000 using the condition `salary >= 0 && salary <= 30000`. If the condition is true, the tax rate is 0%, so the tax amount is calculated using the formula `(salary * 0) / 100`.

The `else if` statements check different salary ranges and apply the corresponding tax rates:

- Annual salary from 0 to 30,000: 0% tax.
- Annual salary from 30,001 to 50,000: 10% tax.
- Annual salary from 50,001 to 100,000: 20% tax.
- Annual salary from 100,001 and above: 30% tax.

The `>=` operator checks whether a value is greater than or equal to another value. The `<=` operator checks whether a value is less than or equal to another value.

The `&&` operator is called the logical AND operator, which returns true only when both conditions are true. For example, `salary >= 30001 && salary <= 50000` checks whether the salary falls between 30,001 and 50,000.

The tax amount is calculated using the formula `(salary * tax_rate) / 100`. For example, if the annual salary is 40,000 and the tax rate is 10%, the calculation is `(40000 * 10) / 100`, which gives a tax amount of 4,000.

The `if` and `else if` statements allow the program to select the appropriate tax rate based on the salary range. The final `else` statement displays `Invalid salary amount` if the salary is negative.

The `printf()` function displays the calculated tax amount or an invalid salary message. The `%d` format specifier is used to display the integer value stored in the `tax` variable.

**Note:** This program uses simplified tax rates for practice and applies the selected rate to the entire salary. It does not represent official tax rules or progressive tax calculation.

## Output 1: Salary with 0% Tax

Enter annual salary amount:25000

Tax amount is 0

## Output 2: Salary with 10% Tax

Enter annual salary amount:40000

Tax amount is 4000

## Output 3: Salary with 20% Tax

Enter annual salary amount:65000

Tax amount is 13000

## Output 4: Salary with 30% Tax

Enter annual salary amount:150000

Tax amount is 45000

## Output 5: Invalid Salary Amount

Enter annual salary amount:-11000

Invalid salary amount