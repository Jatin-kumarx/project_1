#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the no row of an array \n");
    scanf("%d",&x);
    printf("enter the no column of an array \n");
    scanf("%d",&y);
    int array[x][y];
    printf("enter the elements of an array \n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            scanf("%d",&array[i][j]);
        }
        
    }
    printf("the elements of an array are \n");
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            printf("%d\t",array[i][j]);
        }
        
        printf("\n");
    } 
    return 0;
}