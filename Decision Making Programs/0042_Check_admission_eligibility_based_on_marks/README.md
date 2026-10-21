# Check Admission Eligibility Based on Marks

This is a basic C program that takes a student's marks in Bangla, English, and Mathematics as input from the user using the `scanf()` function and checks whether the student is eligible for admission based on the required marks.

The program uses three `int` variables named `bangla`, `english`, and `mathematics` to store the marks obtained in the three subjects. The `int` data type is used because the program works with whole-number marks.

The `scanf()` function is used to take the marks of each subject as input from the user. The `%d` format specifier is used because all three variables are declared as `int`.

The `if` statement checks whether the student meets the required marks in all three subjects using the condition `english >= 50 && bangla >= 50 && mathematics >= 60`.

The condition requires at least 50 marks in English, at least 50 marks in Bangla, and at least 60 marks in Mathematics. If all three conditions are true, the program displays `Eligible for admission.` Otherwise, the `else` statement displays `Not eligible for admission`.

The `>=` operator checks whether a value is greater than or equal to another value. For example, `english >= 50` checks whether the student has obtained at least 50 marks in English.

The `&&` operator is called the logical AND operator, which returns true only when all the connected conditions are true. Therefore, the student must meet the minimum marks requirement in every subject to be eligible for admission.

The `if` and `else` statements allow the program to make a decision based on the student's marks.

The `printf()` function displays the admission eligibility result according to the conditions satisfied by the marks.

## Output 1: Eligible for Admission

Enter bangla marks:60

Enter english marks:70

Enter mathematics marks:80

Eligible for admission.

## Output 2: Not Eligible for Admission

Enter bangla marks:45

Enter english marks:60

Enter mathematics marks:20

Not eligible for admission