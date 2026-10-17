# Check Whether a Person Is Eligible to Vote

This is a basic C program that takes a person's age and the eligible voting age as input from the user using the `scanf()` function and checks whether the person is eligible to vote.

The program uses two `int` variables named `age` and `eligible_age` to store the person's age and the minimum eligible voting age. The `int` data type is used because age is represented as a whole number in this program.

The `scanf()` function is used to take the person's age and the eligible voting age as input from the user. The `%d` format specifier is used because both variables are declared as `int`.

The `if` statement checks whether the person's age is greater than or equal to the eligible voting age using the condition `age >= eligible_age`. The `>=` operator checks whether the person's age is greater than or equal to the required age. If the condition is true, the program displays `This person is eligible to vote`.

The `else` statement executes when the person's age is less than the eligible voting age. In that case, the program displays `This person is not eligible to vote`.

The `printf()` function displays the appropriate message based on the person's age.

## Output 1: Eligible to Vote

Enter age: 20

Enter eligible age to vote: 20

This person is eligible to vote

## Output 2: Not Eligible to Vote

Enter age: 18

Enter eligible age to vote: 20

This person is not eligible to vote
