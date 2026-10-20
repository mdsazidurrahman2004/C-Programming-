# Find the Largest Among Four Numbers

This is a basic C program that takes four numbers as input from the user using the `scanf()` function and determines which number is the largest among them.

The program uses four `int` variables named `a`, `b`, `c`, and `d` to store the input numbers. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take each number as input from the user. The `%d` format specifier is used because all four variables are declared as `int`.

The first `if` statement checks whether `a` is greater than or equal to `b`, `c`, and `d` using the condition `a >= b && a >= c && a >= d`. If all three conditions are true, the program displays `a` as the largest number.

If the first condition is false, the `else if` statement checks whether `b` is greater than or equal to `a`, `c`, and `d` using the condition `b >= a && b >= c && b >= d`. If all three conditions are true, the program displays `b` as the largest number.

If neither of the first two conditions is true, the next `else if` statement checks whether `c` is greater than or equal to `a`, `b`, and `d` using the condition `c >= a && c >= b && c >= d`. If all three conditions are true, the program displays `c` as the largest number.

If none of the first three conditions is true, the final `else` statement displays `d` as the largest number.

The `>=` operator means greater than or equal to. It allows the program to handle cases where two or more numbers have the same value. The `&&` operator is called the logical AND operator, which returns true only when all the connected conditions are true.

The `printf()` function displays the largest number. The `%d` format specifier is used to display the value stored in the selected variable.

## Output 1: C Is the Largest

Enter number A: 20

Enter number B: 32

Enter number C: 50

Enter number D: 45

50 is the largest among four numbers.