#include <stdio.h>
/*Finding Ramanujan number upto a reasonable limit*/
int main()
{
 int a,b,c,d,n,m;
 for (a=1;a<=50;a++)
{
  for(b=a;b<=50;b++)
  {
   n=a*a*a + b*b*b;
   for(c=a+1;c<=50;c++)
   {
      for(d=c;d<=50;d++)
      {
         m=c*c*c + d*d*d;
         if(n==m)
         {
            printf("%d = %d^3 + %d^3  = %d^3 + %d^3\n",n,a,b,c,d);
         }
      }
    }
  }
}
 return 0;
}
