#include<stdio.h>

void work(int a, int b, int *sum, int *prod, int *avg);
int main()
{
   int a=2,b=4;
   int sum,prod,avg;
   work(a,b, &sum,  &prod, &avg);
   printf("sum =%d,prod=%d,avg=%d",sum,prod,avg);  
}

void work(int a, int b, int *sum, int * prod, int *avg)
{
   *sum=a+b;
   *prod=a*b;
   *avg=(a+b)/2;
}