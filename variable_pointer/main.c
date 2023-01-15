//the program of pointer
#include<stdio.h>
int main()
{
    int *a,x;
    printf("enter the number\n");
    scanf("%d",&x);
    *a=&x;
    printf("the address of variable %d \n",*a);
    printf("the value of variable %d \n",x);
    return 0;
}