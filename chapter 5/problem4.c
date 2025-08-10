#include <stdio.h>
// 4. Write a program using recursion to calculate nth element of Fibonacci series.
int funtion(int n);
int funtion(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    return funtion(n - 1) + funtion(n - 2);
}
int main()
{
    printf("Fibonacci series : ");
    for (int n = 0; n <= 10; n++)
    {
        printf("%d\t", funtion(n));
    }
    return 0;
}