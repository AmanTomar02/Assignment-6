// Write a program to calculate sum of first N even natural numbers.

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;
    printf("Enter the number :\n");
    scanf("%d", &n);
    n = n * 2;
    for (i = 2; i <= n; i++)
    {
        if (i % 2 == 0) // EVEN
        {
            sum = sum + i;
            i++;
        }
    }
    printf("%d", sum);
    return 0;
}