#include <stdio.h>
int main()
{
    /*
    4. Write a program to calculate simple interest for a set of values representing      
principal, number of years and rate of interest.

    */
   float p,r,t,SI;
   printf("Principal\n");
   scanf("%f",&p);
   printf("Number of years:\n");
   scanf("%f",&t);
   printf("Rate of interest:\n");
   scanf("%f",&r);
   SI=(p*r*t)/100;
   printf("Simple interest :%f",SI);
    return 0;
}