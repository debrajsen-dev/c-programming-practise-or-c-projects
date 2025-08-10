#include <stdio.h>
// here i am calculating factorial of n using recursion
int factorial(int n);

int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
return factorial(n-1) * n;
}



int main(){
   int a=7;
    printf("%d",factorial(a));
    
    return 0;
}