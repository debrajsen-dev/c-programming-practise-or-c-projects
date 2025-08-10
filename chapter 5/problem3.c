#include <stdio.h>
// 3. Write a function to calculate force of attraction on a body of mass ‘m’ exerted by
//     earth. Consider g = 9.8m/s2.
float FA(int m);

float FA(int m)
{
    return (m * 9.8);
}

int main()
{
    int m = 100;
    printf("Force of attraction : %.2f\n", FA(m));

    return 0;
}