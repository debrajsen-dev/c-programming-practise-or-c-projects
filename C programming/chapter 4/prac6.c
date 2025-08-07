#include <stdio.h>

int main(){
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
   for(n=1;n<=10;n++)
   {
      sum=sum+n;
   }
   printf("Sum:%d\n",sum);
    return 0;
}