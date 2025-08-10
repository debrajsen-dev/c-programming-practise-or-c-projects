#include <stdio.h>
// 2. Write a function to convert Celsius temperature into Fahrenheit.

float funtion(int celcius)
{
   return (celcius*9.0/5.0) + 32; 
}
int main(){
int temp = 36;
printf(" Fahrenheit : %.2f\n",funtion(temp));

    return 0;
}