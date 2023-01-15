#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a  ");
    scanf("%d",&a);
    printf("enter the value of b  ");
    scanf("%d",&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swaping the value a is %d and b is %d",a,b);
}
