#include <stdio.h>

int main()
{
    /*

    4. Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user.


    */
    int year;
    printf("Year :\n");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("Its a leap year");
            }
            else
            {
                printf("Not a leap year");
            }
        }
        else
        {
            printf("Its  a leap year");
        }
    }
    else
    {
        printf(" Not a leap year\n");
    }
    return 0;
}