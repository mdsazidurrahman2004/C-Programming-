# Input and Display

This is a basic C program that takes input from the user using the `scanf()` function and displays the information using the `printf()` function.

The program uses `int` for age, `float` for GPA, and a character array for the grade.

A `char` variable with `%c` can store only one character, such as `A`. Since the grade can be `A+`, a character array `grade[3]` is used to store two characters (`A+`) and the null character `\0`.

The `%s` format specifier is used to take string input. `%2s` limits the input to a maximum of two characters. No space is needed before `%2s` because `%s` automatically skips whitespace.

## Output

Enter your age: 22
Your entered age is 22

Enter your GPA: 4.20
Your entered GPA is 4.20

Enter your grade: A+
Your entered grade is A+