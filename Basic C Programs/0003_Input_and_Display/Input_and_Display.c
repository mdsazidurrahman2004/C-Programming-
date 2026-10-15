#include <stdio.h>

int main()
{
    int age;
    float GPA;
    char grade[3];

    printf("Enter your age:");
    scanf("%d", &age);
    printf("Your entered age is %d\n", age);

    printf("Enter your GPA:");
    scanf("%f", &GPA);
    printf("Your entered GPA is %.2f\n", GPA);

    printf("Enter your grade:");
    scanf("%2s", &grade);
    printf("Your entered grade is %s\n", grade);


    return 0;
}