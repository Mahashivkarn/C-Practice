#include<stdio.h>

int main(){
    int marks[5] ={56,75,89,99,54};
    int i,search;

    printf("Enter the number u want to search:");
    scanf("%d",&search);

    for(i=0;i<5;i++){
        if(search==marks[i]){
            printf("Found at %d\n",i);
            break;
        } 
    }
    if(i==5){
        printf("\nNot found");
    }

    return 0;
}