#include<stdio.h>

int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;

    printf("\nAddress Of i=%u\n",&i);
    printf("Address of i=%u\n",j);
    printf("Address of i=%u\n",*k);

    printf("\nAddress of j=%u\n",&j);
    printf("Address of j=%u\n",k);

    printf("\nAddress of k=%u\n",&k);

    printf("\nValue of k=%d\n",k);

    printf("\nValue of j=%d\n",j);
    printf("Value of j=%d\n",*(&j));
    printf("Value of j=%d\n",*k);

    printf("\nValue of i=%d\n",i);
    printf("Value of i=%d\n",*j);
    printf("Value of i=%d\n",*(&i));
    printf("Value of i=%d\n",**k);
    return 0;
}