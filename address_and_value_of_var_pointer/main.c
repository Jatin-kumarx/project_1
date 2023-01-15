#include<stdio.h>
int main()
{
    int *a,*b;
    int x,y;
    printf("enter the value of x\n");
    scanf("%d",&x);
    printf("enter the value of y\n");
    scanf("%d",&y);
    a=&x;
    b=&y;
    printf("the value of x is %d \n",x);
    printf("the address of x is %d \n",a);
    printf("the value of y is % \n",y);
    printf("the address of y is %d \n",b);
    return 0;
}