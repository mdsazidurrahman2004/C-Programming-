# Find the Smallest Among Three Numbers

This is a basic C program that takes three numbers as input from the user using the `scanf()` function and determines which number is the smallest among them.

The program uses three `int` variables named `a`, `b`, and `c` to store the input numbers. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take each number as input from the user. The `%d` format specifier is used because all three variables are declared as `int`.

The `if` statement checks whether `a` is less than or equal to both `b` and `c` using the condition `a <= b && a <= c`. If both conditions are true, the program displays `a` as the smallest number.

If the first condition is false, the `else if` statement checks whether `b` is less than or equal to both `a` and `c` using the condition `b <= a && b <= c`. If both conditions are true, the program displays `b` as the smallest number.

If neither of the first two conditions is true, the `else` statement displays `c` as the smallest number.

The `<=` operator means less than or equal to. It allows the program to handle cases where two or more numbers have the same value. The `&&` operator is called the logical AND operator, which returns true only when both conditions are true.

The `printf()` function displays the smallest number. The `%d` format specifier is used to display the value stored in the selected variable.

## Output 1: C Is the Smallest

Enter number A: 32

Enter number B: 52

Enter number C: 20

20 is the smallest among three numbers.

## Output 2: A Is the Smallest

Enter number A: 20

Enter number B: 32

Enter number C: 50

20 is the smallest among three numbers.

## Output 3: B Is the Smallest

Enter number A: 52

Enter number B: 20

Enter number C: 32

20 is the smallest among three numbers.