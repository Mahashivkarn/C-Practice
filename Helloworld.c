#include<stdio.h>

void shift(int *,int *, int *);
int main()
{
  int x=5,y=8,z=10;

  printf("x=%d y=%d z=%d\n",x,y,z);
  shift(&x,&y,&z);
  
  printf("y=%d z=%d x=%d",y,z,x);
  return 0;
}

void shift(int *a,int *b,int *c)
{
  int d;
  d=*a;
  *a=*c;
  *c=*b;
  *b=d;
}