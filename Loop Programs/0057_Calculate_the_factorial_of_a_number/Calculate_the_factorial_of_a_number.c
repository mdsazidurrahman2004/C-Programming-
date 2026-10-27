#include <stdio.h>

int main()
{
    int N, fact=1;

    printf("Enter Number: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {
        fact *= i;

    }
    printf("%d\n", fact);
    
    return 0;
}