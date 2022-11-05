// Write a program to calculate LCM of two numbers

#include <stdio.h>

int main()
{
    int a, b, i;

    printf("ENTER THE VALUE OF THESE TWO NO: ..\n");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a * b; i++)
    {
        if ((i % a == 0) && (i % b == 0))
        {
            break;
        }
    }

    printf("the lcm is %d ", i);
    return 0;
}

// NOTE :
// BASIC FORMAULA FOR LCM AND HCF IS

//{    X * Y = LCM * HCF        }