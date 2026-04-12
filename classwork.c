#include<stdio.h>
int main(){
  int s1,s2,s3,sum,largeside;
  printf("Enter three sides of triangle \n");
  scanf("%d %d %d",&s1,&s2,&s3);

   if(s1>s2){
    if(s1>s3){
      sum = s2+s3; largeside=s1;
    }else{
      sum=s1+s2; largeside= s3;
    }
   } else{
    if(s2>s3){
    sum=s1+s3;largeside=s2;
    } else{
      sum=s1+s2 ; largeside=s3;
    }
   }
   
   if(sum>largeside)
   printf("Triangle is valid\n");
   else{
    printf("Triangle is not valid\n");
   }
     return 0;
}