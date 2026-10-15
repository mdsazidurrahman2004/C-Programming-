# Check Whether a Number Is Positive, Negative, or Zero

This is a basic C program that takes an integer as input from the user using the `scanf()` function and checks whether the number is positive, negative, or zero.

The program uses an `int` variable named `num` to store the input number. The `int` data type is used because the program checks whole numbers.

The `scanf()` function is used to take a number as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `if` statement checks whether the number is less than zero using the condition `num < 0`. If the condition is true, the program displays that the number is negative.

The `else if` statement checks whether the number is greater than zero using the condition `num > 0`. If this condition is true, the program displays that the number is positive.

The `else` statement executes when both previous conditions are false. In this case, the number is zero, so the program displays that the number is zero.

The `printf()` function displays the appropriate message based on the input number. The comparison operators `<` and `>` are used to compare the number with zero.

## Output 1: Positive Number

Enter a number: 8

The number is positive

## Output 2: Negative Number

Enter a number: -8

The number is negative

## Output 3: Zero

Enter a number: 0

The number is zero