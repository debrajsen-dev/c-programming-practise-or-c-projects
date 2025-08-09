#include <stdio.h>

int main(){
    /*
    // 5. Write a program to sum first ten natural numbers using while loop.
    // 6. Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.
   /*
    int n = 1, sum = 0;
    while (n <= 10)
    {   
        sum = sum + n;
        n++;
    }
    printf("Sum :\n%d", sum);
    return 0;
   
   */
    int n,sum=0;
    n=1;
    do
    {
        sum=sum+n;
        n++;
        
    } while(n<=10);
    
    printf("Sum:%d",sum);

    return 0;
}