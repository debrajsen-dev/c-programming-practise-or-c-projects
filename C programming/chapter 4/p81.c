#include <stdio.h>

int main(){
    /*
     8. Write a program to calculate the factorial of a given number using a for loop.
    

      int n,a=1,m;
    printf("Enter the number\n");
    scanf("%d",&n);
    
    m=n;
    while(n>=1)
    {
      a=a*n;
      printf("%d\n",a);
      n--;
    }
    printf("Fractional of %d is %d\n",m,a);
    */

    int n,a=1,m;
    printf("Enter the number:\n");
    scanf("%d",&n);
    m=n;
    for(n=n;n>=1;n--)
    {
        a=a*n;
        printf("%d\n",a);
    }
    printf("Fractinal:%d",a);
    return 0;
}