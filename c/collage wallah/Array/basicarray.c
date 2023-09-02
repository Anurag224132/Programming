#include<stdio.h>
int main()
{
    int arr[5]={2,4,6,8,1};
    printf("the element of the array before changing  is %d",arr[4]);
    arr[4]=100;
    printf("\nthe element of the array after changing  is %d",arr[4]);


    float a[3]={1.2,3.5,6.4};
    printf("\n%f\n",a[0]);


    char ar[4]={'a','&','^','%'};
    printf("%c",ar[3]);
    return 0;
}