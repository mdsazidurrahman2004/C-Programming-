# Swap Two Numbers Without a Third Variable

This is a basic C program that takes two integer numbers as input from the user using the `scanf()` function and swaps their values without using a third variable.

The program uses two `int` variables, `num1` and `num2`, to store the input numbers. The values are swapped using addition (`+`) and subtraction (`-`) operations.

The statement `num1 = num1 + num2;` stores the sum of both numbers in `num1`. Then, `num2 = num1 - num2;` gets the original value of `num1` and stores it in `num2`. Finally, `num1 = num1 - num2;` gets the original value of `num2` and stores it in `num1`.

The `printf()` function is then used to display the values after swapping.

## Output

Enter number A: 2

Enter number B: 9

After swapping, number A is 9

After swapping, number B is 2
