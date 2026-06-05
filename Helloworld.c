#include<stdio.h>
#include<math.h>
//FInding lograthmic value 
int main(){
    float n,sum=0,a;
    printf("Enter a number:\n");
    scanf("%f",&a);
for(int i=1;i<=7;i++)
{
    n=pow((a-1)/a,i);
    if(i==1){
        sum =sum +n;
    }else
    {
        sum=sum+n/2;
    }
    
}
printf("The answer is : %f",sum);
return 0;
}