#include<stdio.h>
int main()
{
  int size;
  printf("enter no of elements in array \n");
  scanf("%d",&size);
  int array[size];
  printf("enter the value of elements in array \n");
  for(int i=0;i<size;i++)
  {
      scanf("%d",&array[i]);
  }
  for(int i=0;i<size;i++)
  {
      printf("the value of indexing no %d is %d\n",i,array[i]);
  }
  return 0;
}