#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,l,a=0,b;
    printf("enter the string\n");
    scanf("%s",s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]!=s[l-i-1])
        {
            a=1;
            break;
        }
    }
    if(a)
    {
        printf("string is not palindrome");
    }
    else
    {
        printf("string is palindrome");
    }
    return 0;
}