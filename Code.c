  #include <stdio.h>

  int main()
  {
    int n=7;
    int *age=&n;
    int _thala=*age;
    
    //value
    printf("%d\n",n);
    printf("%d\n",*age);
    printf("%d\n",*(&n));
    
    return 0;
  }