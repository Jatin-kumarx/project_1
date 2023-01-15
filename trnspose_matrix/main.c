#include<stdio.h>
int main()
{
    int row,col;
    printf("enter the no. of rows of an matrix\n");
    scanf("%d",&row);
    printf("enter the no. of column of an matrix\n");
    scanf("%d",&col);
    int  array[row][col];
    printf("elements of an array\n");
    for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
     {
      scanf("%d",&array[i][j]);
     } 
    }
    printf("the matrix is \n");
     for(int i=0;i<row;i++)
    {
     for(int j=0;j<col;j++)
     {
      printf("%d\t",array[i][j]);
     } 
     printf("\n");
    }
    printf("the transpose matrix is \n");
    for(int i=0;i<col;i++)
    {
     for(int j=0;j<row;j++)
     {
      printf("%d\t",array[j][i]);
     } 
      printf("\n");
    }
}