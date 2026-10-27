# Print Numbers from N to 1 Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and prints all numbers from `N` down to 1 using a `for` loop. Unlike the previous program, which prints numbers in ascending order, this program prints them in descending order.

The program uses an integer variable named `N` to store the number entered by the user. The variable `i` is declared inside the `for` loop and works as the loop counter.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function takes the number as input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop contains three parts: initialization, condition, and decrement. The initialization `int i = N` sets the starting value of `i` equal to the number entered by the user. The condition `i >= 1` checks whether `i` is greater than or equal to 1. The decrement `i--` decreases the value of `i` by 1 after each iteration.

As long as the condition is true, the `printf()` statement displays the current value of `i`. The `%d` format specifier prints the integer, and `\n` moves the cursor to the next line. When `i` becomes 0, the condition `i >= 1` becomes false, and the loop stops.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Print Numbers from 5 to 1

Enter a number: 5

5

4

3

2

1