# Calculate the Sum of Odd Numbers from 1 to N Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and calculates the sum of all odd numbers from 1 to `N` using a `for` loop and an `if` statement.

The program uses two integer variables: `N` and `sum`. The variable `N` stores the number entered by the user, while `sum` stores the total of the odd numbers. The variable `sum` is initialized to `0` because no numbers have been added at the beginning.

The `printf()` function displays a message asking the user to enter a value for `N`. The `scanf()` function receives the input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop starts with `int i = 1`, checks the condition `i <= N`, and increases the value of `i` by 1 using `i++` after each iteration. This allows the program to check every number from 1 to `N`.

Inside the loop, the `if` statement checks whether the current number is odd using the condition `i % 2 != 0`. The modulus operator `%` returns the remainder after division. If the remainder is not equal to `0`, the number is odd, and the statement `sum += i` adds that number to the total. This is a shorthand form of `sum = sum + i`.

After the loop finishes, the `printf()` statement displays the final sum using the `%d` format specifier. The `\n` escape sequence moves the cursor to the next line.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Sum of Odd Numbers from 1 to 10

Enter N: 10

25

## Calculation

The odd numbers from 1 to 10 are:

\(1,\ 3,\ 5,\ 7,\ 9\)

Their sum is:

\(1 + 3 + 5 + 7 + 9 = 25\)

**Key concept:** The condition `i % 2 != 0` ensures that only odd numbers are added to `sum`. Even numbers are skipped.