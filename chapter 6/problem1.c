//1. Write a program to print the address of a variable. Use this address to get the 
// value of the variable. 

#include <stdio.h>


int main(){

    int i = 27;
    int* j= &i;
    printf("The address of the variable is %p\n ",&i);
    printf("The address of the variable is %d\n ",*(&i));
    
    return 0;
}