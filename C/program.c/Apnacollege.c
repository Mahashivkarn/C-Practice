#include <stdio.h>

int calper(int math,int physics,int chemistry);

int main()
{
  int math=90;
  int physics=85;
  int chemistry=92;
  printf("percentage is %d",calper(math,physics,chemistry));
  return 0;
}

int calper(int math,int physics,int chemistry)
{
  return ((math+physics+chemistry)/3);
}