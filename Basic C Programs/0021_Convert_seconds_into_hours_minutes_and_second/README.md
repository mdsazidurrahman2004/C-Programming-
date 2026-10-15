# Convert Seconds into Hours, Minutes, and Seconds

This is a basic C program that takes a total number of seconds as input from the user using the `scanf()` function and converts it into hours, minutes, and remaining seconds.

The program uses `int` variables to store the total seconds, hours, minutes, and seconds. The `int` data type is used because these values are whole numbers.

The `scanf()` function is used to take the total number of seconds as input. The `%d` format specifier is used because the variable `total_seconds` is declared as `int`.

The statement `hours = total_seconds / 3600;` calculates the total hours by dividing the total seconds by 3600, because one hour contains 3600 seconds.

The statement `minutes = (total_seconds % 3600) / 60;` calculates the remaining minutes after removing the complete hours. The `%` operator finds the remainder after division by 3600, and `/ 60` converts the remaining seconds into minutes.

The statement `seconds = total_seconds % 60;` calculates the remaining seconds after removing the complete minutes. The `%` operator returns the remainder after dividing the total seconds by 60.

The `printf()` function displays the converted hours, minutes, and seconds. The `%d` format specifier is used to display integer values.

## Output

Enter seconds: 188000

Hour : Minute : Second = 52 : 13 : 20.