#include<stdio.h>
#include<math.h>

int dist(float ,float,float,float);
int area(float ,float,float,float,float,float);
int inside(float,float,float,float,float,float,float,float);
int main()
{
  float x1,y1,x2,y2,x3,y3,x,y;

  printf("Enter A(x1,y1):");
  scanf("%f %f",&x1,&y1);

  printf("Enter B(x2,y2):");
  scanf("%f %f",&x2,&y2);

  printf("Enter C(x3,y3):");
  scanf("%f %f",&x3,&y3);

  printf("Enter D(x,y):");
  scanf("%f %f",&x,&y);

  if(inside( x1,y1,x2,y2,x3,y3,x,y))
   printf("Point D is inside the triangle ABC\n");
  else
   printf("Point D is outside the triangle ABC\n");
  return 0;
}

int dist(float x1,float y1,float x2,float y2)
{
 return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int area(float x1,float y1,float x2,float y2,float x3,float y3)
{
 float a,b,c,s;

 a=dist(x1,y1,x2,y2);
 b=dist(x2,y2,x3,y3);
 c=dist(x3,y3,x1,y1);

 s=(a+b+c)/2;

 return sqrt(s*(s-a)*(s-b)*(s-c));
}

int inside(float x1,float y1,float x2,float y2,float x3,float y3,float x,float y)
{
  float A1,A2,A3,A;

  A=area(x1,y1,x2,y2,x3,y3);

  A1=area(x,y,x1,y1,x2,y2);
  A2=area(x,y,x2,y2,x3,y3);
  A3=area(x,y,x3,y3,x1,y1);

  if(fabs(A-(A1+A2+A3)) < 0.0001)
   return 1;

   return 0;
}