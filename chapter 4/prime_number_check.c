#include <stdio.h>

int main(){
    // prime number check

    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int prime=0;
    for(int i=1;i<=n;i++)
           {
             if(n%i==0)
             {
                prime +=1;
             }
           }

           if(prime>2)
           {
            printf("Its not a prime number");
           }
           else
           {
            printf("Its a prime number");
           }

    return 0;
}