// 4. Write a function and pass the value by reference.
#include <stdio.h>
void funtion(int *);
void funtion(int *n)
{
    *n = *n * 2;
}
int main()
{
    int a = 5;
    printf("The value of a is %d\n", a);

    funtion(&a);

    printf("The value of a after change is %d\n", a);
    return 0;
}