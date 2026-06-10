  #include <stdio.h>
  
  int maxi(int *a,int *b);

  int main()
  {
    int a, b;
    printf("Enter a and b");
    scanf("%d %d",&a,&b);
    int max = maxi(&a,&b);
    printf("From number %d and %d :%d is greater\n",a,b,max);
    return 0;
  }

  int maxi(int *a,int *b)
  {
    if(*a>*b){
      return *a;
    }
    if(*b>*a){
      return *b;
    }
  }