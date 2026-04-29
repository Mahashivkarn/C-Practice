#include<stdio.h>
int main(){
   int a,b,c,d;
   printf("Enter a two number");
   scanf("%d %d",&a,&b);
   c=a;
   a=b;
   b=c;
   printf("Number are:%d %d \n",a,b);
   return 0;
}