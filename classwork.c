#include<stdio.h>
#include<math.h>
void square(int n);

int main(){
  int n;
  printf("Enter a number:");
  scanf("%d",&n);
  square(n);
}

void square(int n)
{
  printf("%f\n",pow(n,2));
}