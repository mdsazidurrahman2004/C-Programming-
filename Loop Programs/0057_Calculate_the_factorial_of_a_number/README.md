# Calculate the Factorial of a Number Using a For Loop

This is a basic C program that takes a non-negative integer as input from the user and calculates its factorial using a `for` loop.

The program uses two integer variables: `N` and `fact`. The variable `N` stores the number entered by the user, while `fact` stores the factorial result. The variable `fact` is initialized to `1` because factorial is calculated through multiplication, and multiplying by 1 does not change the result.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function receives the input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop starts with `int i = 1`, checks the condition `i <= N`, and increases the value of `i` by 1 using `i++` after each iteration. This allows the program to multiply all integers from 1 to `N`.

Inside the loop, the statement `fact *= i` multiplies the current value of `fact` by `i` and stores the result back in `fact`. This is a shorthand form of `fact = fact * i`.

After the loop finishes, the `printf()` statement displays the factorial result using the `%d` format specifier. The `\n` escape sequence moves the cursor to the next line.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Factorial of 7

Enter Number: 7

5040

## Calculation

The factorial of 7 is calculated as follows:

\(7! = 7 \times 6 \times 5 \times 4 \times 3 \times 2 \times 1 = 5040\)

**Key concept:** The `fact *= i` statement repeatedly multiplies the numbers from 1 to `N` to calculate the factorial.

**Note:** This program is intended for non-negative integers, but it does not validate negative input. Also, factorial values grow quickly, so a standard `int` variable can overflow for relatively small inputs. For example, `13!` exceeds the usual 32-bit signed integer range.