#include<stdio.h>

void shift(float *,float *,float *,float  *);
int main()
{
  float kg,gm,ton,pound;
  printf("Enter the amount of Kg to Convert:");
  scanf("%f",&kg);

  shift(&kg,&gm,&ton,&pound);

  printf(" in Kg=%f\n in Gram=%f\n in Ton=%f\n in Pound=%f\n",kg,gm,ton,pound);
  return 0;
}

void shift(float *kg,float *a,float *b,float *c)
{
  *a=*kg*1000;
  *b=*kg/1000;
  *c=*kg * 2.204;
}