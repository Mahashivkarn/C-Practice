#include<stdio.h>
int main()
{
  int n,sum,fact=1;
  printf("Enter a number : ");
  scanf("%d",&n);
  for (int i=1;i<=n;i++)
  {
    
    fact=fact*i;
    sum=fact;
    }
    printf("%d",fact);
  return 0;
}
  

