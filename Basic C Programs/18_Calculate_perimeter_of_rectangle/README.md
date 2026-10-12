# Rectangle Perimeter Calculation

This is a basic C program that takes the length and width of a rectangle as input from the user using the `scanf()` function and calculates its perimeter.

The program uses `float` variables to store the perimeter, length, and width. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the length and width as input. The `%f` format specifier is used because the variables `length` and `width` are declared as `float`.

The statement `perimeter = 2 * (width + length);` calculates the perimeter of the rectangle using the formula. It adds the length and width, then multiplies their sum by 2. The result is stored in the `perimeter` variable.

The `printf()` function displays the calculated perimeter. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter rectangle length: 4

Enter rectangle width: 5

Rectangle perimeter is 18.00