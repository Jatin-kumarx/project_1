#include<stdio.h>
int main()
{
    int num,rem,tem;
    int sum=0;
    tem=num;
    printf("enter the number to check wether it is palindrome or not\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=rem%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(tem==sum)
    {
    printf("the number is palindrome\n");    
    }
    else
    {
    printf("the number is  not palindrome\n");  
    }
   return 0; 
}
