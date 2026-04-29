#include<stdio.h>
#include<math.h>
int main(){
  float x,y,r,Q;
  printf("Enter x and y in cartesian form");
  scanf("%f %f",&x,&y);
  r=sqrt(pow(x,2) +pow(y,2));
  Q=atan(y/x);
  printf("In co-ordinates for they becomes:%f %f",r,Q);
  return 0;
}
  
  

