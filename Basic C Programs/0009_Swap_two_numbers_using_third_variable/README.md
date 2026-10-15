# Swap Two Numbers Using a Third Variable

This is a basic C program that takes two integer numbers as input from the user using the `scanf()` function and swaps their values using a third variable.

The program uses `int` variables `num1` and `num2` to store the two input numbers. A third variable `temp` is used to temporarily store one of the values during the swapping process.

The statement `temp = num1;` stores the value of `num1` in the `temp` variable. Then, `num1 = num2;` assigns the value of `num2` to `num1`. Finally, `num2 = temp;` assigns the original value of `num1` to `num2`.

The `printf()` function is then used to display the values after swapping.

## Output

Enter number A: 2

Enter number B: 3

After swapping, number A is 3

After swapping, number B is 2
