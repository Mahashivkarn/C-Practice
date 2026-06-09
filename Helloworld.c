#include<stdio.h>

int fact(int n);

int main(){
    printf("Factorial is %d\n",fact(5));
    return 0;
 }

 int fact(int n)
 {
    if(n==1)
    {
        return 1;
    }
    int factNm1=fact(n-1);
    int factn=fact(n-1)*n;
    return factn;
 }