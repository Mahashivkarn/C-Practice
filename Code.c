#include<stdio.h>
#include<math.h>

int fun(float,int ,int,float*,int*);

int main()
{
    float a;
    int b,num,fact;
    float n;
    printf("Enter number a & b to calculate a to the power of b");
    scanf("%f %d",&a,&b);
    printf("Enter a number whose facotrial is to be calculated");
    scanf("%d",&num);
    fun(a,b,num,&n,&fact);
    printf("power=%f Factorial=%d",n,fact);
    return 0;
}

int fun(float x,int y,int z,float *n,int *fact)
{
 float a=1;
 for(int i=1;i<=y;i++)
 
    a=a*x;
    *n=a;
    a=1;
    for(int i=1;i<=z;i++)
    a=a*i;
    *fact=a;
}