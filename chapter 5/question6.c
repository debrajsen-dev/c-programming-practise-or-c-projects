#include <stdio.h>
// 6. Write a recursive function to calculate the sum of first ‘n’ natural numbers.
int sum(int n);
int sum(int n){
    if( n== 1)
    {
        return 1;
    }
    return n +sum(n-1);
}
int main(){
    
    printf("Sum %d\n",sum(10));
    return 0;
}