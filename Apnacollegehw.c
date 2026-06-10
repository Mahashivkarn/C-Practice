#include<stdio.h>

int main()
{
   float price[3];

   printf("Enter price 0f 3 products");

   scanf("%f %f %f",&price[0],&price[1],&price[2]);

   printf("GST price of product are : %f %f %f \n",price[0]*0.18,price[1] *0.18,price[2]*0.18);

   printf("Final price of product are : %f %f %f\n",price[0]*0.18 + price[0],price[1] *0.18 + price[1],price[2]*0.18 + price[2]);

   return 0;
}