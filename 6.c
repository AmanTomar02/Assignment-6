// Write a program to calculate factorial of a number

#include <stdio.h>

int main()
{
    int n, i, fact = 1;
    printf("Enter the number :\n");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("1");
        return 0;
    }

    for (i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);

    return 0;
}
