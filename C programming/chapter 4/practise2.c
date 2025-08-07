#include <stdio.h>

int main(){
    /*
    2. Write a program to print multiplication table of 10 in reversed order. 
    */
      
    int m=10,n;
    for(n=10;n>=1;n--)
    {
        printf("%d multiply by %d is %d\n",m,n,m*n);
    }
    return 0;
}