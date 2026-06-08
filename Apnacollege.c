#include <stdio.h>
int main()
{
  int sum=0;
 for(int i =1;i<=50;i++)
 {
  if(i<5)
  {
    continue;
  }
  sum=sum+i;
 }printf("Sum is %d\n",sum);
  return 0;
}