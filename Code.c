#include <stdio.h>

float converttemp(float celsius);

int main()
{  
   float far = converttemp(0);
   printf("f:%f",far);
 return 0;
}

float converttemp(float celsius)
{
  float far=celsius*(9.0/5.0) + 32;
  return far;
}