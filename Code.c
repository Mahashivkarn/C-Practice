#include <stdio.h>
int main(){
int i,n,m,p;
for(i=1;i<=500;i++)
{
   n=i;
   for(m=2;m<n;m++)
   
   {
      if(i%m==0)
      
         break;
      
      
   }

   if(i==m && i!=2)
      {
         printf("%d ",i);
      }
}
return 0;
}