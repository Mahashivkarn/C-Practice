  #include <stdio.h>
  
  void swap(int a,int b);
  void _swap(int *a, int *b);
  int main()
  {
    int x =3,y=5;
    swap(3,5);
    printf("swap x=%d y=%d\n",x,y);
    _swap(&x,&y);
    printf("swap a=%d b=%d\n",x,y);
    return 0;
  }
  
  void swap(int a,int b)
  {
    int c;
    c=a;
    a=b;
    b=c;
    printf("swap a=%d b=%d\n",a,b);
    return a,b;
  }

  void _swap(int *a, int *b)
  {
    int c;
     c=*a;
    *a=*b;
    *b=c;
    printf("swap a=%d b=%d\n",*a,*b);
    return *a,*b;
  }