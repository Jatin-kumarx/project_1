#include<stdio.h>
int main()
{
    int row,column;
    printf("enter the number or rows and colunm of a matrix\n");
    scanf("%d%d",&row,&column);
    int array[row][column];
    if(row==column)
    {
     printf("enter the element of a matrix \n");
     for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
        scanf("%d",&array[i][j]);
        }
      }
     printf("the given matrix is \n");
     for(int i=0;i<row;i++)
      {
        for(int j=0;j<column;j++)
        {
        printf("%d  ",array[i][j]);
        }
        printf("\n");
        
      }
      printf("the elements of left diagonal are \n");
      for(int i=0;i<row;i++)
      printf("%d  ",array[i][i]);
    }
    else 
    printf("the given matrix is not a square matrix therefore the diagonal does not exist");
    
}