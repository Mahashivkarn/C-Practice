#include<stdio.h>

int main()
{
  char *ptr;

  for(*ptr='A';*ptr<='Z';(*ptr)++)
  {
    printf("%c\n",*ptr);
  }
  return 0;
}