#include <stdio.h>

int main(){
    /*
    3. Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab                       
2.5 – 5.0L                               
5.0L - 10.0L                          
Above 10.0L                                              
Tax  
5% 
20% 
30% 
Note that there is no tax below 2.5L. Take income amount as an input from the user. 
    
    */
float income;
// float tax;
   printf("Income:\n");
   scanf("%f",&income);
   if(income<=250000)
   {
    printf("No tax");
   }
   else if(income>250000 && income<=500000)
    {
       
       printf("Tax is %f",(income-250000)*0.05);
   }
   else if(income>500000 && income<=1000000)
   {
      printf("Tax is %f",((250000*0.05)+((income-500000)*0.2)));
   }
   else if(income>1000000)
   {
      printf("Tax is %f",(250000*0.05)+(500000*0.2)+((income-1000000)*0.3));
   }

    
    return 0;
}