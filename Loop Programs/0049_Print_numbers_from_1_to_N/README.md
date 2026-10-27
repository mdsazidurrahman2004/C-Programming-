# Print Numbers from 1 to N Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and prints all numbers from 1 to `N` using a `for` loop.

The program uses two integer variables: `N` and `i`. The variable `N` stores the number entered by the user, while `i` is the loop counter used to print the numbers one by one.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function takes the number as input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop contains three parts: initialization, condition, and increment. The initialization `int i = 1` sets the starting value of `i` to 1. The condition `i <= N` checks whether `i` is less than or equal to `N`. The increment `i++` increases the value of `i` by 1 after each iteration.

As long as the condition is true, the `printf()` statement displays the current value of `i`. The `%d` format specifier prints the integer, and `\n` moves the cursor to the next line. When `i` becomes greater than `N`, the loop stops.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Print Numbers from 1 to 5

Enter a number: 5

1

2

3

4

5