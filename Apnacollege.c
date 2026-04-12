#include<stdio.h>
int main(){
   int i=1,j=1;
   while(i++<=100){
    while(j++<=200){
        if(j==150)
        break;
        else 
        printf("%d %d\n",i,j);
    }
   }
   return 0;
}