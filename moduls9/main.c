#include <stdio.h>

int main()
{
    int a,b;
    printf("enter the value of a & b respectively\n");
    scanf("%d %d",&a,&b);
    
    int output=a%b;
    printf("remainder of %d and %d  is %d ",a,b,output);

    return 0;
}
