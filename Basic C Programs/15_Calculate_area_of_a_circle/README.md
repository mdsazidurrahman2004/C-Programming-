# Circle Area Calculation

This is a basic C program that takes the radius of a circle as input from the user using the `scanf()` function and calculates a value using the approximate value of pi (`3.14159`).

The program uses `float` variables to store the radius and the calculated result. The `float` data type is used because the radius and the calculated value can contain decimal numbers.

The `scanf()` function is used to take the radius as input. The `%f` format specifier is used because the variable `radius` is declared as `float`.

The statement `Area = 3.14159 * radius;` multiplies the approximate value of pi by the radius and stores the result in the `Area` variable. The `printf()` function displays the calculated value using `%.2f`, which shows two digits after the decimal point.

## Output

Enter circle radius: 4

Circle area is 12.57