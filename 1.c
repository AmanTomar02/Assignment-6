// Write a program to calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter the number :\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("the sum is %d ", sum);

    return 0;
}