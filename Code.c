#include<stdio.h>

void pf(int n);

int main()
{
  int n;
  printf("Enter a number:");
  scanf("%d",&n);

  printf("Factorial Of number are\n");
  pf(n);
  return 0;
}

void pf(int n)
{
   int i =2;

    while(n>1)
    {
      if(n%i==0)
      {
        printf("%d\n",i);
        n=n/i;
              }else
              {
                i++;
              }    
          }   
    }