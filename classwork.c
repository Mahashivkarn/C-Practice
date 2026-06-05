#include<stdio.h>
// Program to generate all combinations of 1,2&3
int main()
{
  int i=1,j=2,k=3;
  for(i=1;i<=3;i++)
  {
    for(j=1;j<=3;j++)
    {
      for(k=1;k<=3;k++)
      {
        printf("%d %d %d\n",i,j,k);
      }
    }
  }
  return 0;
}
  

