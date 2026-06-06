#include<stdio.h>
int main(){
    int i,j,sum=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=4-i;j++)
        {
            printf("   ");
        } for(j=1;j<=i;j++)
        {
            printf("%d     ",sum);
            sum++;
        }
        printf("\n");
    }
return 0;
}