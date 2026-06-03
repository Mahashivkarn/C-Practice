#include <stdio.h>
// calculating prime number between 1 to 300
int main(){
int i=1,n;
for(i=1;i<=300;i++){
   n=2;
   for(n=2;n<i;n++)
   {
      if(i%n==0)
      break;
   }
   if(n==i){
      printf("%d\t",i);
   }
}
   return 0;
}