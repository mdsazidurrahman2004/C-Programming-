#include <stdio.h>

int main()
{
    int num1, num2, res;

    printf("Enter number: ");
    scanf("%d", &num1);

    for (  num2 = 1; num2 <= 10; num2++)
    {
        res = num1 * num2 ;

        printf("%d * %d = %d\n", num1, num2, res);
    }
 return 0;   
}