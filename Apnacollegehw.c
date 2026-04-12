#include<stdio.h>
/*Making formula for armstrong number*/
int main(){
    int n,sum,original;
    int a,b,c;
    printf("Enter a number \n");
    scanf("&d",&n);
     original= n;
    /*Taking first digit of thr number */
    a= n / 100;
    b= ( n / 10 ) % 10;/*for second digit*/
    c= n % 10;/*for third digit*/
    //calculte sum of cubes
    sum = a*a*a + b*b*b + c*c*c;
    if(sum == original)
    printf("Number is armstrong number \n");
    else printf("It is not an armstrong number\n");
    
    return 0;

}