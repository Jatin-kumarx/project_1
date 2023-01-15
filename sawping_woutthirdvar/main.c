#include <stdio.h>
int main()
{
    float a,b;
    printf("enter the value of a  ");
    scanf("%f",&a);
    printf("enter the value of b  ");
    scanf("%f",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after swaping the value a is %f and b is %f",a,b);
}