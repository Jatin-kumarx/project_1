#include <stdio.h>
int main()
{
    int a,b;
    printf("entre the value of a ");
    scanf("%d",&a);
    printf("the table of a is \n");
    for(b=1;b<=20;b++)
    {
      printf("%d * %d = %d\n",a,b,a*b);
    }
    return 0;
}