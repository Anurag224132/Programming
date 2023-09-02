//write a program to reverse the array without using any extra array

#include<stdio.h>
int main()
{
    printf("enter the size of the array:");
    int n;
    int arr[n];
    scanf("%d",&n);
    printf("enter the elements in the array of size:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Given array is {");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("}\n");

    printf("reverse array is {");
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
    printf("}\n");

}