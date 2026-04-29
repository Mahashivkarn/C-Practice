#include<stdio.h>
// Revresing a 5 digit number
int main(){
int n,one,two,three,four,five,reverse;
printf("Enter a 5 digit number:");
scanf("%d",&n);
five=n%10;
n=n/10;
four=n%10;
n=n/10;
three=n%10;
n=n/10;
two=n%10;
n=n/10;
one=n;
reverse=five*10000+four*1000+three*100+two*10+one;
printf("reverse of the number is :%d\n",reverse);
return 0;
}