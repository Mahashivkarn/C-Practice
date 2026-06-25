#include<stdio.h>

void pf(int,int );


int main()
{
   int a,b;
   printf("Enter a number");
   scanf("%d",&a);
   printf("Prime factor of numbers are:");
   pf(a,2);
    return 0;
}

void pf(int x,int y)
{ 
    if(y<=x)

    {
        if(x%y==0)
        {
            printf("%d\n",y);
            x=x/y;
        }else
        {
            y++;
        }
    }pf(x,y);
}