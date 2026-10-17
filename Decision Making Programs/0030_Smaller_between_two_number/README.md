# Compare Two Numbers to Check Whether A Is Smaller Than B

This is a basic C program that takes two integers, A and B, as input from the user using the `scanf()` function and compares them to check whether A is smaller than B.

The program uses two `int` variables named `num1` and `num2` to store the input values of A and B. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take the values of A and B as input from the user. The `%d` format specifier is used because the variables `num1` and `num2` are declared as `int`.

The `if` statement checks whether A is smaller than B using the condition `num1 < num2`. The `<` operator is used to compare two values. If the condition is true, the program displays `A is smaller than B`.

The `else` statement executes when the condition `num1 < num2` is false. In this case, the program displays `A is not smaller than B`. This also happens when A and B are equal because A is not smaller than B.

The `printf()` function displays the appropriate message based on the comparison between the two numbers.

## Output 1

Enter number A: 20

Enter number B: 32

A is smaller than B

## Output 2

Enter number A: 32

Enter number B: 20

A is not smaller than B