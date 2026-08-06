#include<stdio.h>

int main(){
    int marks[5],i;

    printf("Enter 5 numbers:");

    for(i=0;i<5;i++){
      scanf("%d",&marks[i]);
    }
    printf("The numbers are:");
    for(i=0;i<5;i++)
     printf("%d\n",marks[i]);
    return 0;
}