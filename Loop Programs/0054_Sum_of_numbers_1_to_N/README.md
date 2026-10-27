# Calculate the Sum of Natural Numbers from 1 to N Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and calculates the sum of all natural numbers from 1 to `N` using a `for` loop.

The program uses two integer variables: `N` and `sum`. The variable `N` stores the number entered by the user, while `sum` stores the total of the numbers. The variable `sum` is initialized to `0` because the calculation starts without any added values.

The `printf()` function displays a message asking the user to enter a value for `N`. The `scanf()` function receives the input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop starts with `int i = 1`, checks the condition `i <= N`, and increases the value of `i` by 1 using `i++` after each iteration. This allows the program to process every natural number from 1 to `N`.

Inside the loop, the statement `sum += i` adds the current value of `i` to `sum`. This is a shorthand form of `sum = sum + i`. The sum is updated during every iteration until the loop finishes.

After the loop ends, the `printf()` statement displays the final sum using the `%d` format specifier. The `\n` escape sequence moves the cursor to the next line.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Sum of Natural Numbers from 1 to 10

Enter N: 10

55

## Calculation

The program calculates the sum as follows:

\(1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55\)

**Key concept:** The statement `sum += i` accumulates the value of each number in the `sum` variable until the loop completes.