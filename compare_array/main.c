#include<stdio.h>
int main()
{
    int n,m,tem1,tem2;
    int count=0;
    printf("enter the size of 1st array \n");
    scanf("%d",&n);
    int array1[n];
    printf("the elements of 1st array are \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }
    printf("enter the size of 2nd array are \n");
    scanf("%d",&m);
    int array2[m];
    printf("the elements of 2nd arrary are \n  ");
    for(int i=0;i<m;i++)
    {
        scanf("%d",&array2[i]);
    }
    if(n==m)
    {
    for(int i=0;i<n;i++)
    {
        if(array1[i]>array1[i+1])
        {
            tem1=array1[i];
            array1[i]=array1[i+1];
            array1[i+1]=tem1;
        }
        if(array2[1]>array2[i+1])
        {
            tem2=array2[i];
            array2[i]=array2[i+1];
            array2[i+1]=tem2;
        }
    }
    printf("the sorted 1st array is \n");
    for(int i=0;i<n;i++)
    {
       printf(" %d\n",array1[i]);
    }
    printf("the sorted 2nd array is \n");
    for(int i=0;i<n;i++)
    {
       printf(" %d\n",array2[i]);
    }
    for(int i=0;i<n;i++)
    {
    if(array1[i]!=array2[i])
    {
    count++;
    break;
    }
    }
    if(count==1)
    printf("the given arrays are not equal");
    else 
    printf("the given arrays are equal");
    }
    else
    printf("the given arrays are not equal");
}