# Check Whether a Character Is a Vowel Using Switch-Case

This is a basic C program that takes a character as input from the user and checks whether it is a vowel using a `switch` statement. The program can identify both uppercase and lowercase vowels.

The program uses a `char` variable named `ch` to store the character entered by the user. The `char` data type is used because the program works with a single character.

The `printf()` function displays a message asking the user to enter a character. The `scanf()` function receives the character as input. The `%c` format specifier is used because the variable `ch` is declared as `char`.

The `switch` statement checks the value of the `ch` variable against different cases. The five lowercase vowels are `'a'`, `'e'`, `'i'`, `'o'`, and `'u'`, while the five uppercase vowels are `'A'`, `'E'`, `'I'`, `'O'`, and `'U'`.

Multiple `case` labels are used together without separate statements. This allows all ten vowel cases to execute the same `printf()` statement. If the entered character matches any of these cases, the program displays that the character is a vowel.

The `break` statement terminates the matching case after displaying the result. The `default` case handles any character that does not match a vowel, such as a consonant, digit, or symbol, and displays that it is not a vowel.

The `printf()` statement uses `%c` to display the character entered by the user. The `\n` escape sequence moves the cursor to the next line after displaying the message.

## Output 1: Uppercase Vowel

Enter a character: A

A is a vowel.

## Output 2: Consonant

Enter a character: B

B is not a vowel.