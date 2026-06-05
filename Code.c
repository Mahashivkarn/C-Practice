#include <stdio.h>
int main()
{
 int a,b,c;
 for(a=1;a<=30;a++)
 {
   for(b=a;b<=30;b++)
   {
      for(c=b;c<=30;c++)
      {
         if(a*a+b*b==c*c)
         {
          printf("Triplets are: %d %d %d\n",a,b,c);
         }
      }
   }
 }
 return 0;
}
