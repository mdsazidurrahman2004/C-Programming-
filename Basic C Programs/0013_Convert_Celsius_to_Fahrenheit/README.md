# Celsius to Fahrenheit Conversion

This is a basic C program that takes the temperature in Celsius as input from the user using the `scanf()` function and converts it into Fahrenheit.

The program uses `float` variables to store the temperature in Celsius and the converted temperature in Fahrenheit. The `float` data type is used because temperature values can contain decimal numbers.

The `scanf()` function is used to take the Celsius temperature as input. The `%f` format specifier is used because the variable `celsius` is declared as `float`.

The statement `fahrenheit = (celsius * (9.0 / 5.0)) + 32;` converts Celsius into Fahrenheit using the formula. The values `9.0` and `5.0` are used instead of `9` and `5` to perform floating-point division and obtain the correct conversion factor of `1.8`.

The `printf()` function displays the converted temperature. The `%.2f` format specifier displays the result with two digits after the decimal point.

## Output

Enter temperature in Celsius: 38

The temperature in Fahrenheit is 100.40