#include <stdio.h>

int main()
{
    /*
    2. Write a program to determine whether a student has passed or failed. To pass, a
    student requires a total of 40% and at least 33% in each subject. Assume there
    are three subjects and take the marks as input from the user.
    */

    int a, b, c;
    printf("Enter Subjects marks I did some changes one more change 23223\n");

    
    printf("Enter Subject 1 marks\n");
    scanf("%d", &a);
    printf("Enter Subject 1 marks\n");
    scanf("%d", &b);
    printf("Enter Subject 1 marks\n");
    scanf("%d", &c);

    if (a >= 33 && b >= 33 && c >= 33)
    {
        if ((a + b + c) >= 120)
        {
            printf("Pass\n");
        }
        else
        {
            printf("Failed\n");
        }
    }
    else
    {
        printf("Failed\n");
    }

    return 0;
}
