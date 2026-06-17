  #include <stdio.h>
  
   int year(int);


   int main()
   {
    int a,n;
    
    printf("\nEnter a Year:\n");
    scanf("%d",&a);

    n=year(a);
    
    return 0;
   }  

   int year(int x)
   {
    if((x%400==0)||(x%100 !=0 && x%4==0))
    {
      return printf("Leap Year\n");
    } else
    {
      return printf("not a Leap Year\n");
    }
   }