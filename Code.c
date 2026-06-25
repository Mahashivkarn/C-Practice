#include<stdio.h>
#include<math.h>

int recu(int );

int main()
{
    int a,fact;
    printf("Enter a 5 digit number:");
    scanf("%d",&a);
    fact = recu(a);
    printf("sum is %d\n",fact);
    return 0;
}

int recu(int n)
{
    int j=0,k;
    if(n!=0)
    {
        j=n%10;
        k=j+recu(n/10);
    }else{
        return 0;
    }
    return k;
    
}