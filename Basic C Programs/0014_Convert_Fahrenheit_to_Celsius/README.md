# Fahrenheit to Celsius Conversion

This is a basic C program that takes the temperature in Fahrenheit as input from the user using the `scanf()` function and converts it into Celsius.

The program uses `float` variables to store the temperature in Fahrenheit and the converted temperature in Celsius. The `float` data type is used because temperature values can contain decimal numbers.

The `scanf()` function is used to take the Fahrenheit temperature as input. The `%f` format specifier is used because the variable `fahrenheit` is declared as `float`.

The statement `celsius = (fahrenheit - 32) * (5.0 / 9.0);` converts Fahrenheit into Celsius using the formula. First, 32 is subtracted from the Fahrenheit temperature, and then the result is multiplied by `5.0 / 9.0`. The decimal values `5.0` and `9.0` are used to perform floating-point division and obtain the correct conversion factor.

The `printf()` function displays the converted temperature. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter temperature in Fahrenheit: 100.4

The temperature in Celsius is 38.00