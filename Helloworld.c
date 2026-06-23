#include<stdio.h>

int main()
{
  float a=3.14;
  float *ptr= &a;
  float **dptr= &ptr;
  
  printf("Addres of a ptr dptr =%p %p %p",&a,&ptr,&dptr);
  printf("\n%p %p\n",ptr,dptr);
  printf("\n%f %f %f\n",a,*ptr,**dptr);
  return 0;
}