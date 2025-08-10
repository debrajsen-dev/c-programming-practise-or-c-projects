// 1. Write a program using function to find average of three numbers.
#include <stdio.h>

float function(int a,int b,int c)
{
    return (float)(a+b+c)/3;
}

int main(){
    int x = 30;
    int y = 56;
    int z = 36;
  printf("Average : %f",function(x,y,z));


    return 0;
}