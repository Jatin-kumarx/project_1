//the program of call by reference 
#include<stdio.h>
void swap(int *x , int *y)
{
  int tem;
  tem=*x;
  *x=*y;
  *y=tem;
  printf("frist value %d\n",*x);
  printf("second value %d\n",*y);
}
void main()
{
    int a,b;
    printf("enter the first number \n");
    scanf("%d",&a);
    printf("enter the second number \n");
    scanf("%d",&b);
    swap(&a,&b);
}
