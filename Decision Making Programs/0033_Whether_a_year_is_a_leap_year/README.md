# Check Whether a Year Is a Leap Year

This is a basic C program that takes a year as input from the user using the `scanf()` function and checks whether the year is a leap year.

The program uses an `int` variable named `year` to store the input year. The `int` data type is used because a year is represented as a whole number.

The `scanf()` function is used to take a year as input from the user. The `%d` format specifier is used because the variable `year` is declared as `int`.

The `if` statement checks whether the year is a leap year using the condition `year % 400 == 0 || year % 4 == 0 && year % 100 != 0`. According to the Gregorian calendar, a year is a leap year if it is divisible by 400, or if it is divisible by 4 but not divisible by 100.

The `%` operator returns the remainder after division. The condition `year % 400 == 0` checks whether the year is divisible by 400. The condition `year % 4 == 0` checks whether the year is divisible by 4, while `year % 100 != 0` checks that the year is not divisible by 100.

The `||` operator is called the logical OR operator, which returns true if at least one condition is true. The `&&` operator is called the logical AND operator, which returns true only when both conditions are true. In C, `&&` has higher precedence than `||`, so the condition works correctly.

If the year satisfies the leap year conditions, the program displays that it is a leap year. Otherwise, the `else` statement displays that it is not a leap year.

The `printf()` function displays the result. The `%d` format specifier displays the year entered by the user.

## Output 1: Not a Leap Year

Enter a year: 1986

1986 is not a leap year.

## Output 2: Leap Year

Enter a year: 1884

1884 is a leap year.