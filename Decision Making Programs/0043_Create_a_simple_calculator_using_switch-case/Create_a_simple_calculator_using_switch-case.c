#include <stdio.h>

int main(){
    
    float num1, num2;
    char operator;
    
    printf("Enter an operator(+, -, *, /):");
    scanf("%c", &operator);

    printf("Enter number A:");
    scanf("%f", &num1);

    printf("Enter number B:");
    scanf("%f", &num2);

    switch (operator)
    {
    case '+':
        printf("Result = %.2f", num1 + num2);
        break;

    case '-':
        printf("Result = %.2f", num1 - num2);
        break;

    case '*':
        printf("Result = %.2f", num1 * num2);
        break;

    case '/':
        if (num2 != 0)
        {
            printf("Result = %.2f", num1/num2);
        } else
        {
            printf("Cannot divide by zero");
        }
        break;
        
    default:
        printf("Invalid operator");
        break;
    }
    
    return 0;
}