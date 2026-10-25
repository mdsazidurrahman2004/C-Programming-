# Display the Month Name Using Switch-Case

This is a basic C program that takes a number between 1 and 12 as input from the user using the `scanf()` function and displays the corresponding month name using a `switch` statement.

The program uses an `int` variable named `num` to store the month number entered by the user. The `int` data type is used because the program works with whole numbers.

The `scanf()` function is used to receive input from the user. The `%d` format specifier is used because the variable `num` is declared as an integer.

The `switch` statement checks the value of the `num` variable and displays the corresponding month name. In this program, `case 1` represents January, `case 2` represents February, `case 3` represents March, `case 4` represents April, `case 5` represents May, `case 6` represents June, `case 7` represents July, `case 8` represents August, `case 9` represents September, `case 10` represents October, `case 11` represents November, and `case 12` represents December.

The `break` statement terminates each case after executing its instructions, preventing the program from continuing into the next case. The `default` case displays `invalid month number` if the user enters a number outside the range of 1 to 12.

The `printf()` function displays the month name or the invalid month message. The `\n` escape sequence moves the cursor to the next line after displaying the message.

## Output 1: August

Enter a number (1-12): 8

It is August

## Output 2: Invalid Month Number

Enter a number (1-12): 13

invalid month number