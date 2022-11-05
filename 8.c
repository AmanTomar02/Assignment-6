//  Write a program to check whether a given number is a Prime number or not.

#include <stdio.h>

int main()
{
    int n, i, c = 0;
    printf("enter the number :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("prime");
    }
    else
    {
        printf("NOT");
    }
    return 0;
}