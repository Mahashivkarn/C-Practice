#include<stdio.h>
int main(){
   float l,b,r,area,peri,areac,peric;
  //  l=length,b= breath,r =radius,area=area of rectange,peri=preimeter of rectangle,areac=area of circle,peric=perimeter of circle.
  printf("Enter length ,breath of rectangle and radius of circle:");
  scanf("%f %f %f",&l,&b,&r);
  area=l*b;
  peri=2*(l+b);
  areac=3.14*r*r;
  peric=2*3.14*r;
  printf("Area of Rectangle is:%f\n",area);
  printf("Perimeter of Rectangle is:%f\n",peri);
  printf("Area of Circle is:%f\n",areac);
  printf("Perimeter of Circle is:%f\n",peric);
  return 0;
}