#include<stdio.h>
int main()
{
    int num,rem,temp;
    int sum=0;
    printf("enter a number to check weather it is armstrong or not \n");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
    rem=num%10;
    sum=sum+(rem*rem*rem);
    num=num/10;
    }
    if(temp==sum)
    {
    printf("the given number %d is armstrong  \n",temp);
    }
    else
    {
    printf("the given number %d is not armstrong  \n",temp); 
    }
    return 0;
}

