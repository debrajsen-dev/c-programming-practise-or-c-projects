#include <stdio.h>

int main(){
    /*
    7. Write a program to calculate the sum of the numbers occurring in the 
multiplication table of 8. (consider 8 x 1 to 8 x 10). 
    
    */
   int n1=8,i,sum=0;
   for(i=1;i<=10;i++)
   {
    sum=sum+n1*i;
   }
   printf("Sum:%d",sum);


    return 0;
}