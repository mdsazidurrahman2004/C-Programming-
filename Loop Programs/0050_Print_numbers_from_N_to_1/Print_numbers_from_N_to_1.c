#include <stdio.h>

int main()
{
    int N;

    printf("Enter a number: ");
    scanf("%d", &N);

    for(int i = N; i >= 1; i--){
        printf("%d\n", i);
    }
    return 0;
}