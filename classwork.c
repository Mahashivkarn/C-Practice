#include<stdio.h>
// Execution of a loop an unknown times
int main(){
  char another;
  int num;
  do
  {
    printf("Enter a number");
    scanf("%d",&num);
    printf("square of %d is %d\n",num,num*num);
    printf("Wanna Ener anoter number y/n");
    fflush(stdin);
    scanf("%c",&another);
  }while(another=='y');
  return 0;
}
  
  

