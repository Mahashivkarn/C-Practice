#include<stdio.h>
#include<math.h>

int rec(int );

int main()
{
    int a,fact;
    printf("Enter a number:");
    scanf("%d",&a);
    fact = rec(a);
    printf("Factorial is %d\n",fact);
    return 0;
}

int rec(int n)
{
    int f;
    if(n==1)
    return(1);
    else
    {
      f=n*rec(n-1);
    }
    return f;
}