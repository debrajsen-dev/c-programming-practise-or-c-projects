#include <stdio.h>

int main(){
    //6. Write a program to find greatest of four numbers entered by the user.
    int a,b,c,d,x;
    printf("Enter the numbers\n");
     scanf("%d",&a);
     scanf("%d",&b);
     scanf("%d",&c);
     scanf("%d",&d);

     if(a>b && a>c && a>d)
     {
        x=a;
     }
     else if(b>a && b>c && b>d)
     {
        x=b;
     }
     else if(c>a && c>b && c>d)
     {
        x=c;
     }
     else 
     {
        x=d;
     }
     printf("The greatest number is %d",x);
    return 0;
}