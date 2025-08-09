#include <stdio.h>

int main()
{
    /*
    5. Write a program to sum first ten natural numbers using while loop.
    */
    int n = 1, sum = 0;
    while (n <= 10)
    {   
        sum = sum + n;
        n++;
    }
    printf("Sum :\n%d", sum);
    return 0;
}