#include<stdio.h>

int main()
{
   int age=22;
   int *ptr=&age;

   int _age=24;
   int *_ptr=&_age;

   printf("%p\n",ptr-_ptr);

   _ptr=&age;

   printf("%u Comparision",ptr==_ptr);


   return 0;
}