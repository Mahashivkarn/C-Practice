#include<stdio.h>

void printtable(int n);

int main()
{
  int n;
 printf("Enter a number:");
 scanf("%d",&n); 
 
 printtable(n);
}

void printtable(int n)
{
  for(int i=1; i<=10;i++)
  {
      printf("%d\n",i*n);
  }
}