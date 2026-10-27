# Print Even Numbers from 1 to N Using a For Loop

This is a basic C program that takes a positive integer `N` as input from the user and prints all even numbers from 1 to `N` using a `for` loop and an `if` statement.

The program uses an integer variable named `N` to store the number entered by the user. The variable `i` is declared inside the `for` loop and acts as a counter to check each number from 1 to `N`.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function takes the number as input, and the `%d` format specifier is used because `N` is declared as an `int` variable.

The `for` loop starts with `int i = 1`, checks the condition `i <= N`, and increases the value of `i` by 1 using `i++` after each iteration. This allows the program to check every integer from 1 to `N`.

Inside the loop, the `if` statement checks whether a number is even using the condition `i % 2 == 0`. The modulus operator `%` returns the remainder after division. If a number is divided by 2 and the remainder is 0, the number is even, so the `printf()` statement displays it.

The `%d` format specifier prints the current even number, while `\n` moves the cursor to the next line. Odd numbers are skipped because they do not satisfy the `if` condition.

Finally, `return 0;` indicates that the program has completed successfully.

## Output: Print Even Numbers from 1 to 15

Enter a number: 15

2

4

6

8

10

12

14