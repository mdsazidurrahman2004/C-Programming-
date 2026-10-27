# Count the Number of Digits in a Number Using a While Loop

This is a basic C program that takes an integer as input from the user and counts the number of digits using a `while` loop. It also handles the special case where the input number is `0`, because zero contains one digit.

The program uses two integer variables: `num` and `count`. The variable `num` stores the number entered by the user, while `count` keeps track of the number of digits. The variable `count` is initialized to `0` because no digits have been counted at the beginning.

The `printf()` function displays a message asking the user to enter a number. The `scanf()` function receives the input, and the `%d` format specifier is used because `num` is declared as an `int` variable.

Before the loop begins, the `if` statement checks whether `num == 0`. If the input is zero, the program sets `count = 1` because zero has one digit. Otherwise, the program enters the `while` loop.

The `while` loop continues as long as `num != 0`. Inside the loop, the statement `num /= 10` divides the number by 10 and removes its last digit through integer division. For example, if `num` is `123`, the values become `12`, then `1`, and finally `0`. Each time a digit is removed, `count++` increases the digit count by 1.

When `num` becomes `0`, the loop stops. The `printf()` function then displays the total number of digits using the `%d` format specifier.

Finally, `return 0;` indicates that the program has completed successfully.

## Output 1: Count Digits in 123

Enter a number: 123

Number of digits: 3

## Output 2: Count Digits in 0

Enter a number: 0

Number of digits: 1

## How the While Loop Works

For the input `123`:

| Iteration | `num` before division | `num /= 10` result | `count` |
|     1     |           123         |        12          |    1    |
|     2     |            12         |         1          |    2    |
|     3     |             1         |         0          |    3    |

When `num` becomes `0`, the condition `num != 0` becomes false, and the loop stops.

**Key concept:** Integer division by 10 removes the last digit of a positive integer. Repeating this operation until the number becomes zero allows the program to count its digits.