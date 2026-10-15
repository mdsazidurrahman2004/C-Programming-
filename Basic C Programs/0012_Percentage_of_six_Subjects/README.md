# Percentage of Six Subjects

This is a basic C program that takes the obtained marks of six subjects as input from the user using the `scanf()` function and calculates the total marks, total obtained marks, and percentage.

The program uses `float` variables to store the obtained marks of each subject, total marks, total obtained marks, and the calculated percentage. The `float` data type is used because marks and percentage can contain decimal values.

The `scanf()` function is used to take the obtained marks as input. The `%f` format specifier is used because the variables are declared as `float`.

The statement `total_mark = 6 * 100;` calculates the total marks for six subjects, assuming each subject carries 100 marks. The statement `total_obtain_marks = mark1 + mark2 + mark3 + mark4 + mark5 + mark6;` adds the obtained marks of all six subjects.

The percentage is calculated using the formula `(total_obtain_marks / total_mark) * 100`. Finally, the `printf()` function displays the total marks, total obtained marks, and percentage using `%.2f` to show two digits after the decimal point.

## Output

Enter obtained marks in Bangla: 60

Enter obtained marks in English: 80

Enter obtained marks in Mathematics: 98

Enter obtained marks in Physics: 78

Enter obtained marks in Chemistry: 65

Enter obtained marks in ICT: 80

Total mark = 600.00

Total obtained marks = 461.00

Percentage of six subjects is 76.83
