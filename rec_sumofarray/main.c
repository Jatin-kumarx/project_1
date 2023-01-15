#include<stdio.h>
#define max_index 100
int sum(int array[],int index,int length);
int main()
{
 int num;    
 int array[max_index];
 printf("enter the nunmber of elements \n");
 scanf("%d",&num);
 printf("enter the elements of array \n");
 for(int i=0;i<num;i++)
 {
     scanf("%d",&array[i]);
 }
 int SUMofARRAY=sum(array,0,num);
 printf("sum of the array element is = %d",SUMofARRAY);
 return 0;
}
int sum(int array[],int index,int length)
{
if(index>=length)
return 0;
return(array[index]+sum(array,index+1,length));
}
