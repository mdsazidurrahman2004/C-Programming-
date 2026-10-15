# Check Whether a Number Is Even or Odd

This is a basic C program that takes an integer as input from the user using the `scanf()` function and checks whether the number is even, odd, or zero.

The program uses an `int` variable named `num` to store the input number. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take a number as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `if` statement checks whether the number is equal to zero using the condition `num == 0`. The `==` operator is used to compare two values. If the condition is true, the program displays that the number is zero.

The `else if` statement checks whether the number is even using the condition `num % 2 == 0`. The `%` operator returns the remainder after division. If a number is divided by 2 and the remainder is zero, the number is even.

The `else` statement executes when the number is neither zero nor even. In this case, the number is odd, so the program displays that the number is odd.

The `printf()` function displays the appropriate message based on the input number.

## Output 1: Even Number

Enter a number: 8

The number is even

## Output 2: Odd Number

Enter a number: 5

The number is odd

## Output 3: Zero

Enter a number: 0

The number is zero