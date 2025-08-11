// 5. Write a program using a function which calculates the sum and average of two 
// numbers. Use pointers and print the values of sum and average in main(). 

#include <stdio.h>

void  funtion(int,int,int*,float*);
void  funtion(int a,int b,int* sum,float* avg)

{   *sum = a+b;
   *avg = *sum/2.0;
}



int main(){
    int a,b;
    a= 5;
    b=4;
    int sum;
    float avg;

    funtion(a,b,&sum,&avg);
    printf("The sum is %d\n",sum);
    printf("The average is %f\n",avg);
    return 0;
}