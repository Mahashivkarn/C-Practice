#include<stdio.h>

int main()
{
   int age =22;
   int *ptr=&age;

   printf("%p\n",ptr);

   ptr++;

   printf("%p\n",ptr);

   return 0;
}