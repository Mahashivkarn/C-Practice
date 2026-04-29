#include<stdio.h>
int main(){
   float fer,temp;
   printf("Enter temperature in Fahrenheit:");
   scanf("%f",&fer);
   temp=(fer-32)*5/9;
   printf("Temperature in Celsius is:%f \n",temp);
   return 0;
}