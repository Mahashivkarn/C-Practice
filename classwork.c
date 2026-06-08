#include<math.h>
#include<stdio.h>
float squarearea(float a);
float circlearea(float b);
float rectanglearea(float c,float d);

int main()
 {
  float a,b,c,d;
  printf("Enter a,b,c&d");
  scanf("%f %f %f %f",&a,&b,&c,&d);
  printf("Area of square:%f\n",squarearea(a));
  printf("Area of circle:%f\n",circlearea(b));
  printf("Area of rectangle:%f\n",rectanglearea(c,d));
  return 0; 
 }
 
 float squarearea(float a)
 {
   return a*a;
 }
 float circlearea(float b)
 {
  return 3.14*b*b;
 }
float rectanglearea(float c,float d)
{
  return c*d;
}