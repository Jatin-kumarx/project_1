#include <stdio.h>

int main()
{
    int row,i,j,space;
    printf("enter the no of rows");
    scanf("%d",&row);
    for(i=0;i<=row;++i)
    {
        for(space=0;space<row-i;++space)
        printf(" ");
        for(j=i;j<=2*i-1;++j)
        printf("*");
        for(j=0;j<i-1;++j)
        printf("*");
        printf("\n");
    }
    for(i=row-1;i>=1;--i)
    {
        for(space=0;space<row-i;++space)
        printf(" ");
        for(j=i;j<=2*i-1;++j)
        printf("*");
        for(j=0;j<i-1;++j)
        printf("*");
        printf("\n");
    }
    return 0;
}


