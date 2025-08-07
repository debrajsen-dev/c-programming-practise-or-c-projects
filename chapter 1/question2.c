#include <stdio.h>
int main()
/* 2. Calculate the area of a circle and modify the same program to calculate the 
volume of a cylinder given its radius and height. 
*/
{ 
    float pi =3.14;
    int radius,height;
    printf("Enter radius:\n");
    scanf("%d",&radius);
    printf("Enter Height:\n"); 
    scanf("%d",&height);
    printf("Area of the circle is: %f\n",pi*radius*radius);
    printf("Area of the cylinder is : %f",pi*radius*radius*height);
    return 0;
}