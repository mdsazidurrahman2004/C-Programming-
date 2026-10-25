# Create a Simple Calculator Using Switch-Case

This is a basic C program that takes an arithmetic operator and two numbers as input from the user using the `scanf()` function and performs the corresponding arithmetic operation using a `switch` statement.

The program uses two `float` variables named `num1` and `num2` to store the two numbers. The `float` data type is used because the program can work with decimal numbers. It also uses a `char` variable named `operator` to store the arithmetic operator entered by the user.

The `scanf()` function is used to take the operator and the two numbers as input from the user. The `%c` format specifier is used to read a single character, while `%f` is used to read floating-point numbers.

The `switch` statement checks the value of the `operator` variable and performs the corresponding arithmetic operation.

The `case '+'` performs addition by adding `num1` and `num2`. The `case '-'` performs subtraction by subtracting `num2` from `num1`. The `case '*'` performs multiplication by multiplying `num1` and `num2`. The `case '/'` performs division by dividing `num1` by `num2`.

The `if` statement inside the division case checks whether `num2 != 0`. If the second number is not equal to zero, the program performs division. Otherwise, it displays `Cannot divide by zero` to prevent division by zero.

The `!=` operator checks whether two values are not equal. For example, `num2 != 0` checks whether the second number is not equal to zero.

The `break` statement terminates the current case and prevents execution from continuing into the next case. The `default` case displays `Invalid operator` if the user enters an operator other than `+`, `-`, `*`, or `/`.

The `printf()` function displays the result of the selected arithmetic operation. The `%.2f` format specifier displays the result as a floating-point number with two digits after the decimal point.

## Output 1: Addition

Enter an operator(+, -, *, /):+

Enter number A:4

Enter number B:2

Result = 6.00

## Output 2: Subtraction

Enter an operator(+, -, *, /):-

Enter number A:4

Enter number B:2

Result = 2.00

## Output 3: Multiplication

Enter an operator(+, -, *, /):*

Enter number A:4

Enter number B:2

Result = 8.00

## Output 4: Division

Enter an operator(+, -, *, /):/

Enter number A:4

Enter number B:2

Result = 2.00

## Output 5: Division by Zero

Enter an operator(+, -, *, /):/

Enter number A:4

Enter number B:0

Cannot divide by zero