# Rectangle Area Calculation

This is a basic C program that takes the length and width of a rectangle as input from the user using the `scanf()` function and calculates its area.

The program uses `float` variables to store the length, width, and calculated area. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the length and width as input. The `%f` format specifier is used because the variables `length` and `width` are declared as `float`.

The statement `Area = width * length;` calculates the area of the rectangle by multiplying its length by its width. The result is stored in the `Area` variable.

The `printf()` function displays the calculated area. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter rectangle length: 4

Enter rectangle width: 5

Rectangle area is 20.00