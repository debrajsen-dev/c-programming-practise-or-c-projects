#include <stdio.h>

int main(){
    /*
    1. Write a program to print multiplication table of a given number n.
    
    */
     
    int m,n;
    printf("Enter the number:\n");
    scanf("%d",&m);
    for(n=1;n<=20;n++)
    {
      printf("%d multiply by %d is %d \n",m, n, (m*n));

    }

    return 0;
}