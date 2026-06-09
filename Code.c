  #include <stdio.h>

  int main()
  {
    int n,sum=0,nm1=1,nm2;
    printf("Enter a number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d",sum);
        nm2=nm1+sum;
        sum=nm1;
        nm1=nm2;  
    }
    return 0;
  }