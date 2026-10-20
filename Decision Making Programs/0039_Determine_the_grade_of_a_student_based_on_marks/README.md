# Determine the Grade of a Student Based on Marks

This is a basic C program that takes a student's marks as input from the user using the `scanf()` function and determines the student's grade based on the marks.

The program uses an `int` variable named `num` to store the marks entered by the user. The `int` data type is used because the program works with whole-number marks.

The `scanf()` function is used to take marks as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `if` statement checks whether the marks are between 0 and 32 using the condition `num <= 0 && 32 >= num`. If the condition is true, the program displays `Grade F`.

The `else if` statements check different ranges of marks to determine the grade:

- Marks from 33 to 39 result in Grade D.
- Marks from 40 to 49 result in Grade C.
- Marks from 50 to 59 result in Grade B.
- Marks from 60 to 69 result in Grade A-.
- Marks from 70 to 79 result in Grade A.
- Marks from 80 to 100 result in Grade A+.

The `>=` operator checks whether a value is greater than or equal to another value. The `<=` operator checks whether a value is less than or equal to another value.

The `&&` operator is called the logical AND operator, which returns true only when both conditions are true. For example, `num >= 70 && 79 >= num` checks whether the marks are between 70 and 79.

The `if` and `else if` statements allow the program to check the mark ranges one by one and display the corresponding grade.

The `printf()` function displays the grade based on the marks entered by the user.

**Note:** The first condition in the original code is incorrect for checking marks from 0 to 32. It should be `num >= 0 && num <= 32`. Also, marks below 0 or above 100 are not handled by the current program.

## Output: Grade A

Enter marks:79

Grade A