#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0)); // Seed random number generator
    int random_number = (rand() % 100) + 1;
    int input; // intput from the user
    printf("Enter a number between 1 to 100\n");
    // i will create a infine loop
    for (int i = 1;; i++)
    {

        scanf("%d", &input);
        if (input == random_number)
        {
            printf("Correct , Number of guesses:%d\n", i);

            break;
        }
        else
        {
            if (input < random_number)
            {
                printf("Higher number please\n");
            }
            else
            {
                printf("lower number please\n");
            }
        }
    }

    return 0;
}
