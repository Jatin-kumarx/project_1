#include<stdio.h>
int main()
{
    int n,n3;
    int n1=0;
    int n2=1;
    printf("enter the no of terms : ");
    scanf("%d",&n);
    printf("fibonacci series : %d,%d",n1,n2);
    for(int i=2;i<n;i++)
    {
     n3=n1+n2;
     printf(",%d",n3);
     n1=n2;
     n2=n3;
    }
    
}
