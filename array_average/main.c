#include<stdio.h>
int main()
{
  int size,sum=0;
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
      sum=sum+array[i];
  }
  float average=(float)sum/size;
  printf("the average value of %d elements of array is %.2f \n",size,average);
  
  return 0;
}