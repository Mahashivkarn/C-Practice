#include<stdio.h>
#include<math.h>

int fun(int*,float*,double*);

int main()
{
  int sum;
  float avg;
  double std;
  fun(&sum, &avg,&std);
  printf("%d %f %lf",sum,avg,std);
  return 0;
}

int fun(int *x,float *y,double *z)
{
  int n1,n2,n3,n4,n5;
  printf("\n Enter 5 number : ");
  scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
  *x=n1+n2+n3+n4+n5;
  *y=(n1+n2+n4+n5)/5;
  *z=sqrt((pow((n1-*y),2.0))+pow((n2-*y),2.0) +pow((n3-*y),2.0) +pow((n4-*y),2.0)+pow((n5-*y),4));
}