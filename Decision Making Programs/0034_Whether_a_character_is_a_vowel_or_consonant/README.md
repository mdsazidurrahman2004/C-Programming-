# Check Whether a Character Is a Vowel or Consonant

This is a basic C program that takes a character as input from the user using the `scanf()` function and checks whether the character is a vowel or a consonant.

The program uses a `char` variable named `c` to store the input character. The `char` data type is used because the program needs to store a single character, such as `A`, `b`, or `e`.

The `scanf()` function is used to take a character as input from the user. The `%c` format specifier is used because the variable `c` is declared as `char`.

The `if` statement checks whether the entered character is a vowel using the condition `c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'`. The five vowels are `a`, `e`, `i`, `o`, and `u`. Both lowercase and uppercase vowels are checked so that the program can recognize both `a` and `A` as vowels.

The `==` operator is used to compare the input character with each vowel. The `||` operator is called the logical OR operator, which returns true if at least one condition is true. Therefore, if the entered character matches any one of the vowel conditions, the program identifies it as a vowel.

If the condition is true, the program displays that the character is a vowel using the `printf()` function. Otherwise, the `else` statement displays that the character is a consonant.

The `%c` format specifier is used in the `printf()` function to display the character entered by the user.

**Note:** This program assumes that the user enters an English alphabet. If a number or symbol is entered, the program will incorrectly identify it as a consonant because the code does not check whether the input is an alphabet.

## Output 1: Vowel (Uppercase)

Enter a alphabet: A

A is a vowel.

## Output 2: Vowel (Lowercase)

Enter a alphabet: e

e is a vowel.

## Output 3: Consonant

Enter a alphabet: b

b is a consonant.