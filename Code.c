#include <stdio.h>
// calculating armstrong number between 1 to 500
int main()
{
   int n = 1, i, m, num;
   while (n < 500)
   {
      i = n;
      num = 0;
      while (i > 0)
      {
         m = i % 10;
         num = num + m * m * m;
         i = i / 10;
      }
      if(num==n){
         printf("%d\n",n);
      }
      n++;
   }
   return 0;
}