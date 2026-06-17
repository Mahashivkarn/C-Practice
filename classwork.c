#include<stdio.h>
#include<math.h>

 int fact(int);

 int main()
 {
  int a,b;
   
  printf("Enter a number for Factorial:");
  scanf("%d",&a);
   b =fact(a);

   printf("Factorial of %d = %d\n",a,b);
    
   return 0;

 }

 int fact(int x)
 {
  int y=1;
  for(int i=1;i<=x;i++)
  {
    y=y*i;

  }
   return (y);
 }