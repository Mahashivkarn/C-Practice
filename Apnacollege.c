#include<stdio.h>
// Checking if the is leap year or not.
int main(){
  int year;
  printf("Enter a Year:\n");
  scanf("%d",&year);
  if(year%4==0){
    printf("Year is a leap Year");
  } else{
    printf("Year is not a leap year");
  }
  return 0;
}