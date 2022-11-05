// Write a program to calculate sum of cubes of first N natural numbers

#include <stdio.h>

int main()
{
    int n, cube, sum = 0, i;
    printf("enter the number :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        cube = i * i * i;
        sum = sum + cube;
        printf(" sum of cube of first %d natural numbers is %d. \n", i, sum);
    }
    printf(" \n\nsum of cube of first %d natural numbers is %d. \n", n, sum);

    return 0;
}