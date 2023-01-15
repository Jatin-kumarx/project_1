//the program of array pointer
#include<stdio.h>
void main()
{
    int arr[5]={1,2,3,4,5,};
    printf("arr : %u, Value : %d\n", arr, *arr);
    printf("&arr : %u, Value : %d\n", &arr, *(arr));
    printf("&arr[0] : %u, Value : %d\n", &arr[0], *( &arr[0]));
    return 0;
}