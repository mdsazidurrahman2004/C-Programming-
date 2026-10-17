# Check Whether a Student Has Passed or Failed

This is a basic C program that takes marks in Bangla, English, and Mathematics, along with the pass mark, as input from the user using the `scanf()` function and checks whether the student has passed or failed.

The program uses `float` variables to store the marks of Bangla, English, and Mathematics, as well as the pass mark. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the marks of the three subjects and the pass mark as input from the user. The `%f` format specifier is used because all these variables are declared as `float`.

The `if` statement checks whether the student has achieved the required pass mark in all three subjects using the condition `pass_mark <= bangla && pass_mark <= english && pass_mark <= math`. The `<=` operator checks whether the pass mark is less than or equal to each subject's marks.

The `&&` operator is called the logical AND operator. It checks whether all three conditions are true. If the student gets marks equal to or greater than the pass mark in every subject, the program displays `The student has passed`.

The `else` statement executes if any one of the three conditions is false. In that case, the program displays `The student has failed`.

The `printf()` function displays the appropriate message based on the student's marks.

## Output 1: Student Has Failed

Enter Bangla mark: 30

Enter English mark: 27

Enter Math mark: 7

Enter pass mark: 13

The student has failed

## Output 2: Student Has Passed

Enter Bangla mark: 30

Enter English mark: 28

Enter Math mark: 27

Enter pass mark: 13

The student has passed