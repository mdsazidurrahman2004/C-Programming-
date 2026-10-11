# Triangle Area Calculation

This is a basic C program that takes the base and height of a triangle as input from the user using the `scanf()` function and calculates its area.

The program uses `float` variables to store the base, height, and calculated area. The `float` data type is used because these values can contain decimal numbers.

The `scanf()` function is used to take the base and height as input. The `%f` format specifier is used because the variables `base` and `height` are declared as `float`.

The statement `Area = (1.0 / 2.0) * base * height;` calculates the area of the triangle using the formula. The values `1.0` and `2.0` are used to perform floating-point division and obtain `0.5`.

The `printf()` function displays the calculated area. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter triangle base: 3

Enter triangle height: 5

Triangle area is 7.50