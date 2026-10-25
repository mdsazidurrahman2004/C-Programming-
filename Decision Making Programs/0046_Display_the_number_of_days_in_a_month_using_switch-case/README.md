# Display the Number of Days in a Month Using Switch-Case

This is a basic C program that takes a month number between 1 and 12 and a year as input from the user. It then displays the number of days in the selected month using a `switch` statement and checks whether February has 28 or 29 days based on the leap year condition.

The program uses two `int` variables named `month` and `year`. The `month` variable stores the month number, while the `year` variable stores the year entered by the user. The `int` data type is used because both values are whole numbers.

The `printf()` function displays messages asking the user to enter a month and a year. The `scanf()` function receives these values, and the `%d` format specifier is used to read integer input.

The `switch` statement checks the value of the `month` variable. Each `case` represents a month of the year and displays its corresponding number of days. January, March, May, July, August, October, and December have 31 days, while April, June, September, and November have 30 days.

February requires a special condition because it can have either 28 or 29 days. Inside `case 2`, an `if-else` statement checks whether the entered year is a leap year. The condition `year % 400 == 0 || year % 4 == 0 && year % 100 != 0` checks whether the year is divisible by 400, or divisible by 4 but not divisible by 100. If the condition is true, the program displays 29 days in February; otherwise, it displays 28 days.

The `break` statement terminates each case after executing its instructions. The `default` case displays `invalid month` if the user enters a month number outside the range of 1 to 12.

## Output 1: February in a Leap Year

Enter any month (1-12): 2

Enter Year: 2008

29 days in February (Leap Year).

## Output 2: March

Enter any month (1-12): 3

Enter Year: 2000

31 days in March.