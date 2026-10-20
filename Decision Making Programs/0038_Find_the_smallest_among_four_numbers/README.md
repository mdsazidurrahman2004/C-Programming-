# Find the Smallest Among Four Numbers

This is a basic C program that takes four integer numbers as input from the user using the `scanf()` function and finds the smallest number among them.

The program uses four `int` variables named `a`, `b`, `c`, and `d` to store the input numbers. The `int` data type is used because these variables store whole numbers.

The `scanf()` function is used to take the four numbers as input from the user. The `%d` format specifier is used because all four variables are declared as `int`.

The `if` statement checks whether `a` is less than or equal to `b`, `c`, and `d` using the condition `a <= b && a <= c && a <= d`. If all these conditions are true, the program identifies `a` as the smallest number.

The `else if` statements check whether `b` or `c` is less than or equal to the other three numbers. If none of these conditions is true, the `else` statement identifies `d` as the smallest number.

The `<=` operator checks whether one value is less than or equal to another value. The `&&` operator is called the logical AND operator, which returns true only when all the connected conditions are true.

The `if`, `else if`, and `else` statements are used to make decisions based on the comparison results. This allows the program to determine which of the four numbers is the smallest.

The `printf()` function displays the result. The `%d` format specifier displays the smallest number identified by the program.

## Output 1: Smallest Number Is D

Enter number A:32

Enter number B:50

Enter number C:45

Enter number D:20

20 is the smallest among four numbers

## Output 2: Smallest Number Is C

Enter number A:45

Enter number B:50

Enter number C:32

Enter number D:20

20 is the smallest among four numbers

## Output 3: Smallest Number Is A

Enter number A:20

Enter number B:32

Enter number C:45

Enter number D:50

20 is the smallest among four numbers