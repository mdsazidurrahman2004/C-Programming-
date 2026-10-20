# Determine Whether a Triangle Is Equilateral, Isosceles, or Scalene

This is a basic C program that takes the lengths of three sides of a triangle as input from the user using the `scanf()` function and determines whether the triangle is Equilateral, Isosceles, or Scalene.

The program uses three `int` variables named `a`, `b`, and `c` to store the lengths of the three sides. The `int` data type is used because the program works with whole-number side lengths.

The `scanf()` function is used to take the three side lengths as input from the user. The `%d` format specifier is used because all three variables are declared as `int`.

The `if` statement checks whether all three sides are equal using the condition `a == b && b == c`. If all three sides are equal, the program displays `The triangle is a Equilateral`.

The `else if` statement checks whether any two sides are equal using the condition `a == b || a == c || b == c`. If any two sides are equal, the program displays `The triangle is an Isosceles`.

The next `else if` statement checks whether all three sides are different using the condition `a != b && b != c && c != a`. If all three sides are different, the program displays `The triangle is a Scalene`.

The `==` operator checks whether two values are equal, while the `!=` operator checks whether two values are not equal.

The `&&` operator is called the logical AND operator, which returns true only when all the connected conditions are true. The `||` operator is called the logical OR operator, which returns true if at least one condition is true.

The `if` and `else if` statements allow the program to compare the three side lengths and determine the type of triangle based on the equality of its sides.

The `printf()` function displays the result according to the conditions satisfied by the side lengths.

**Note:** The current program checks only whether the side lengths are equal or different. It does not verify whether the three lengths can form a valid triangle. For a valid triangle, the sum of any two sides must be greater than the third side, and all side lengths must be positive.

## Output 1: Equilateral Triangle

Enter the length of A:20

Enter the length of B:20

Enter the length of C:20

The triangle is a Equilateral

## Output 2: Isosceles Triangle

Enter the length of A:20

Enter the length of B:20

Enter the length of C:15

The triangle is an Isosceles

## Output 3: Scalene Triangle

Enter the length of A:20

Enter the length of B:15

Enter the length of C:10

The triangle is a Scalene