// Write a program to calculate sum of squares of first N natural numbers

#include <stdio.h>

int main()
{
    int n, sq, sum = 0, i;
    printf("enter the number :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sq = i * i;
        sum = sum + sq;
    printf(" sum of squares of first %d natural numbers is %d. \n", i, sum);
    }
    printf(" \n\nsum of squares of first %d natural numbers is %d. \n", n, sum);

    return 0;
}