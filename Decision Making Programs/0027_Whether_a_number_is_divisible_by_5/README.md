# Check Whether a Number Is Divisible by 5

This is a basic C program that takes an integer as input from the user using the `scanf()` function and checks whether the number is divisible by 5.

The program uses an `int` variable named `num` to store the input number. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take a number as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `if` statement checks whether the number is divisible by 5 using the condition `num % 5 == 0`. The `%` operator returns the remainder after division. If the remainder is zero, the number is divisible by 5, and the program displays that the number is divisible by 5.

The `else` statement executes when the condition is false. If the remainder is not zero, the number is not divisible by 5, and the program displays that the number is not divisible by 5.

The `printf()` function displays the appropriate message based on the input number. The `==` operator is used to check whether the remainder is equal to zero.

## Output 1: Divisible by 5

Enter a number: 5

The number is divisible by 5

## Output 2: Not Divisible by 5

Enter a number: 6

The number is not divisible by 5