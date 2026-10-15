#include <stdio.h>

int main()
{
    float mark1, mark2, mark3, mark4, mark5, mark6, total_obtain_marks, total_mark, percentage;

    printf("Enter obtained marks in Bangla:");
    scanf("%f", &mark1);
    printf("Enter obtained marks in English:");
    scanf("%f", &mark2);
    printf("Enter obtained marks in Mathematics:");
    scanf("%f", &mark3);
    printf("Enter obtained marks in Physics:");
    scanf("%f", &mark4);
    printf("Enter obtained marks in Chemistry:");
    scanf("%f", &mark5);
    printf("Enter obtained marks in ICT:");
    scanf("%f", &mark6);

    total_mark = 6*100;

    printf("Total mark = %.2f\n", total_mark);

    total_obtain_marks = mark1 + mark2 + mark3 + mark4 + mark5 + mark6;

    printf("Total obtained marks = %.2f\n", total_obtain_marks);

    percentage = (total_obtain_marks / total_mark) * 100;

    printf("Percentage of six subjects is %.2f\n", percentage);

    return 0;
}