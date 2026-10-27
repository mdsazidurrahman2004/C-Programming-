# Calculate the Sum of Even Numbers from 1 to N Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and calculates the sum of all even numbers from 1 to `N` using a `for` loop and an `if` statement.

The program uses two integer variables: `N` and `sum`. The variable `N` stores the number entered by the user, while `sum` stores the total of the even numbers. The variable `sum` is initialized to `0` because no numbers have been added at the beginning.

The `printf()` function displays a message asking the user to enter a value for `N`. The `scanf()` function receives the input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop starts with `int i = 1`, checks the condition `i <= N`, and increases the value of `i` by 1 using `i++` after each iteration. This allows the program to check every number from 1 to `N`.

Inside the loop, the `if` statement checks whether the current number is even using the condition `i % 2 == 0`. The modulus operator `%` returns the remainder after division. If the remainder is `0`, the number is even, and the statement `sum += i` adds that number to the total. This is a shorthand form of `sum = sum + i`.

After the loop finishes, the `printf()` statement displays the final sum using the `%d` format specifier. The `\n` escape sequence moves the cursor to the next line.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Sum of Even Numbers from 1 to 10

Enter N: 10

30

## Calculation

The even numbers from 1 to 10 are:

\(2,\ 4,\ 6,\ 8,\ 10\)

Their sum is:

\(2 + 4 + 6 + 8 + 10 = 30\)

**Key concept:** The `if (i % 2 == 0)` condition ensures that only even numbers are added to `sum`. Odd numbers are skipped.