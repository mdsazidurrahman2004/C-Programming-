# Check Whether a Number Is Divisible by Both 3 and 5

This is a basic C program that takes an integer as input from the user using the `scanf()` function and checks whether the number is divisible by both 3 and 5.

The program uses an `int` variable named `num` to store the input number. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take a number as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `if` statement checks whether the number is divisible by both 3 and 5 using the condition `num % 5 == 0 && num % 3 == 0`. The `%` operator returns the remainder after division. If both remainders are zero, the number is divisible by both 3 and 5.

The `&&` operator is called the logical AND operator. It checks whether both conditions are true. If both conditions are true, the program displays that the number is divisible by both 3 and 5.

The `else` statement executes when either condition or both conditions are false. In that case, the program displays that the number is not divisible by both 3 and 5.

The `printf()` function displays the appropriate message based on the input number. The `==` operator is used to check whether each remainder is equal to zero.

## Output 1: Divisible by Both 3 and 5

Enter a number: 15

The number is divisible by both 5 and 3

## Output 2: Not Divisible by Both 3 and 5

Enter a number: 6

The number is not divisible by both 5 and 3