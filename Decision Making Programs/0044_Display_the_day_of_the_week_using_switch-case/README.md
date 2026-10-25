# Display the Day of the Week Using Switch-Case

This is a basic C program that takes a number between 1 and 7 as input from the user using the `scanf()` function and displays the corresponding day of the week using a `switch` statement.

The program uses an `int` variable named `num` to store the number entered by the user. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to take a number as input from the user. The `%d` format specifier is used because the variable `num` is declared as `int`.

The `switch` statement checks the value of the `num` variable and displays the corresponding day of the week. In this program, `case 1` represents Saturday, `case 2` represents Sunday, `case 3` represents Monday, `case 4` represents Tuesday, `case 5` represents Wednesday, `case 6` represents Thursday, and `case 7` represents Friday.

The `break` statement terminates the current case and prevents execution from continuing into the next case. The `default` case displays `invalid day number` if the user enters a number that does not match any of the cases from 1 to 7.

The `printf()` function displays the corresponding day of the week or an invalid day message. The `\n` escape sequence moves the cursor to the next line after displaying the message.

## Output 1: Tuesday

Enter a number (1-7): 4

It is Tuesday

## Output 2: Friday

Enter a number (1-7): 7

It is Friday

## Output 3: Invalid Day Number

Enter a number (1-7): 0

invalid day number