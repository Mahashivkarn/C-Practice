#include<stdio.h>
int main(){
   int j;
   printf("Enter a number:");
   scanf("%d",&j);
  for(int i=1;i<=10;i++){
    printf("%d * %d =%d\n",j, i,i*j) ;
  }
   return 0;
}