#include<stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
     int key=40;
     int i;

     for(i=0;i<=5;i++)
     {
        if(a[i]==key)
        {
            printf("Element found at index %d",i);
            return 0;
        }
     }  
     printf("Not Found");
     return 0;
}
