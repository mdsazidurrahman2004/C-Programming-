# Convert Days into Years, Months, and Days

This is a basic C program that takes a total number of days as input from the user using the `scanf()` function and converts it into years, months, and remaining days.

The program uses `int` variables to store the total days, years, months, and remaining days. The `int` data type is used because these values are whole numbers.

The `scanf()` function is used to take the total number of days as input. The `%d` format specifier is used because the variable `total_days` is declared as `int`.

The statement `years = total_days / 365;` calculates the number of complete years by dividing the total days by 365, assuming one year contains 365 days.

The statement `months = (total_days % 365) / 30;` calculates the remaining months after removing the complete years. The `%` operator finds the remaining days after dividing by 365, and `/ 30` converts those remaining days into months, assuming one month contains 30 days.

The statement `days = total_days % 30;` calculates the remaining days after removing the complete months. The `%` operator returns the remainder after dividing the total days by 30.

The `printf()` function displays the converted years, months, and days. The `%d` format specifier is used to display integer values.

**Note:** This program uses an approximate conversion of 365 days per year and 30 days per month. It does not account for leap years or the actual number of days in each calendar month.

## Output

Enter days: 492

Years : Months : Days = 1 : 4 : 12