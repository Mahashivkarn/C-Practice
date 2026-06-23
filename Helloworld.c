#include<stdio.h>

void fun(int * ,int *);
int main()
{
  int i=5,j=2;
  fun(&i,&j);
  printf("%d %d",i,j);
  return 0;
}

void fun(int *x,int *y)
{
  *x=*x* *x;
  *y=*y * *y;
}