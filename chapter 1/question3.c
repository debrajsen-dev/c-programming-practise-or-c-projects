#include <stdio.h>
int main()
/*
3. Write a program to convert Celsius (Centigrade degrees temperature to 
Fahrenheit).

*/
{
float celcius;
printf("Enter the celcius:\n");
scanf("%f",&celcius);
printf("Farenheit:%f",(celcius*9/5)+32);
    return 0;
}