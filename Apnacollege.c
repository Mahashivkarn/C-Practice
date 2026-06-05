#include <stdio.h>
int main()
{
 int year;
 float population=100000.0;
  for(year=1;year<=10;year++)
  {
    population=population/1.10;
  }
  printf("Population a end of each year :\n\n");
   for(year=1;year<=10;year++)
   {
    population=population*1.10;
    printf("Year %d: %.0f\n",year,population);
   }
 
  return 0;
}