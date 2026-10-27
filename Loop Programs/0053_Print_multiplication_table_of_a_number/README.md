# Print a Multiplication Table Using a For Loop

This is a basic C program that takes an integer as input from the user and prints its multiplication table from 1 to 10 using a `for` loop.

The program uses three integer variables: `num1`, `num2`, and `res`. The variable `num1` stores the number entered by the user, `num2` acts as the loop counter, and `res` stores the result of each multiplication.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function receives the number as input, and the `%d` format specifier is used because `num1` is declared as an `int` variable.

The `for` loop starts with `num2 = 1`, checks the condition `num2 <= 10`, and increases `num2` by 1 using `num2++` after each iteration. Therefore, the loop executes 10 times, with `num2` taking values from 1 to 10.

Inside the loop, the statement `res = num1 * num2` multiplies the input number by the current value of `num2` and stores the result in `res`.

The `printf()` statement displays each multiplication equation using three `%d` format specifiers, representing `num1`, `num2`, and `res`, respectively. The `\n` escape sequence moves the cursor to the next line after each equation.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Multiplication Table of 9

Enter number: 9

9 * 1 = 9

9 * 2 = 18

9 * 3 = 27

9 * 4 = 36

9 * 5 = 45

9 * 6 = 54

9 * 7 = 63

9 * 8 = 72

9 * 9 = 81

9 * 10 = 90