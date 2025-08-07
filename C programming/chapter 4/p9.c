#include <stdio.h>

int main()
{
    /*
    10. Write a program to check whether a given number is prime or not using loops.

    */
    int a, b = 0, c, d, i;
    printf("Enter the number\n");
    scanf("%d", &a);
    for (i = 2; i <= 9; i++)
    {
        if (a % i == 0)
        {
            if (a != i)
            {
                b = b + 1;
            }
        }
        else
        {
            b = b + 0;
        }
    }
    if (b > 0)
    {
        printf("%d is a prime number\n", a);
    }
    else
    {
        printf("%d is not a prime number\n", a);
    }
    return 0;
}